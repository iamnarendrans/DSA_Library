#include <iostream>
using namespace std;

// Define a structure to represent an array
struct Array {
    int A[10];  // Fixed-size array of 10 elements
    int size;   // Maximum size of the array
    int length; // Current number of elements in the array
};

// Function to display the elements of the array
void Display(const Array& arr) {
    cout << "\nElements are: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

// Function to merge two sorted arrays into a new array
Array* Merge(const Array* arr1, const Array* arr2) {
    int i = 0, j = 0, k = 0;

    // Dynamically allocate memory for the merged array
    Array* arr3 = new Array;

    // Merge the elements in sorted order
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
        } else {
            arr3->A[k++] = arr2->A[j++];
        }
    }

    // Copy remaining elements from arr1, if any
    while (i < arr1->length) {
        arr3->A[k++] = arr1->A[i++];
    }

    // Copy remaining elements from arr2, if any
    while (j < arr2->length) {
        arr3->A[k++] = arr2->A[j++];
    }

    // Set the length and size of the merged array
    arr3->length = arr1->length + arr2->length;
    arr3->size = 10;

    return arr3;
}

int main() {
    // Initialize two sorted arrays
    Array arr1 = {{2, 9, 21, 28, 35}, 10, 5};
    Array arr2 = {{2, 3, 16, 18, 28}, 10, 5};

    // Merge the arrays
    Array* arr3 = Merge(&arr1, &arr2);

    // Display the merged array
    Display(*arr3);

    // Free the dynamically allocated memory
    delete arr3;

    return 0;
}
