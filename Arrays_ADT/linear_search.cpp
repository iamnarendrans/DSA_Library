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

// Function to swap two integers
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

// Function to perform linear search and bring the found element to the front
int LinearSearch(Array* arr, int key) {
    for (int i = 0; i < arr->length; i++) {
        if (key == arr->A[i]) {
            swap(arr->A[i], arr->A[0]); // Move the found element to the front
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    // Initialize the array
    Array arr1 = {{2, 23, 14, 5, 6, 9, 8, 12}, 10, 8};

    // Perform linear search for key 14
    cout << "Key found at index: " << LinearSearch(&arr1, 9) << endl;

    // Display the updated array
    Display(arr1);

    return 0;
}
