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

// Function to reverse the array using an auxiliary array
void Reverse(Array& arr) {
    int* B = new int[arr.length];
    for (int i = arr.length - 1, j = 0; i >= 0; i--, j++) {
        B[j] = arr.A[i];
    }
    for (int i = 0; i < arr.length; i++) {
        arr.A[i] = B[i];
    }
    delete[] B; // Free the dynamically allocated memory
}

// Function to reverse the array in place using swapping
void Reverse2(Array& arr) {
    for (int i = 0, j = arr.length - 1; i < j; i++, j--) {
        swap(arr.A[i], arr.A[j]);
    }
}

int main() {
    // Initialize the array
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // Reverse using the auxiliary array
    Reverse(arr1);
    cout << "Array after reversing (using auxiliary array):";
    Display(arr1);

    // Reverse back using the in-place swapping method
    Reverse2(arr1);
    cout << "Array after reversing again (using in-place swap):";
    Display(arr1);

    return 0;
}
