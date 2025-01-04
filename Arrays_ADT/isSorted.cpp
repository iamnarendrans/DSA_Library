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
    for (int i = 0; i < arr.length; i++) { // Iterate through the array
        cout << arr.A[i] << " ";           // Print each element
    }
    cout << endl;
}

// Function to check if the array is sorted in ascending order
bool isSorted(const Array& arr) {
    for (int i = 0; i < arr.length - 1; i++) { // Iterate through the array
        if (arr.A[i] > arr.A[i + 1]) {         // Compare consecutive elements
            return false;                      // Return false if order is broken
        }
    }
    return true; // Return true if all elements are sorted
}

int main() {
    // Initialize an array with some values
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // Check if the array is sorted and print the result
    cout << "Is the array sorted? " << (isSorted(arr1) ? "Yes" : "No") << endl;

    // Display the elements of the array
    Display(arr1);

    return 0;
}
