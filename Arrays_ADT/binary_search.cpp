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

// Function to perform an iterative binary search
int BinarySearch(const Array& arr, int key) {
    int l = 0, h = arr.length - 1;

    while (l <= h) {
        int mid = (l + h) / 2; // Find the mid index
        if (key == arr.A[mid])
            return mid; // Key found
        else if (key < arr.A[mid])
            h = mid - 1; // Search in the left half
        else
            l = mid + 1; // Search in the right half
    }
    return -1; // Key not found
}

// Function to perform a recursive binary search
int RBinSearch(int a[], int l, int h, int key) {
    if (l <= h) {
        int mid = (l + h) / 2;
        if (key == a[mid])
            return mid; // Key found
        else if (key < a[mid])
            return RBinSearch(a, l, mid - 1, key); // Search in the left half
        else
            return RBinSearch(a, mid + 1, h, key); // Search in the right half
    }
    return -1; // Key not found
}

int main() {
    // Initialize the array
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // Perform iterative binary search for key 16
    cout << "Key found at index (Iterative): " << BinarySearch(arr1, 16) << endl;

    // Perform recursive binary search for key 18
    cout << "Key found at index (Recursive): " << RBinSearch(arr1.A, 0, arr1.length - 1, 18) << endl;

    // Display the array
    Display(arr1);

    return 0;
}
