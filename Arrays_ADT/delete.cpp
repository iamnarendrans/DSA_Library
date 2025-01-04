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

// Function to delete an element from a specific index in the array
int Delete(Array& arr, int index) {
    int x = 0; // Variable to store the deleted value

    if (index >= 0 && index < arr.length) { // Check if the index is valid
        x = arr.A[index];                   // Store the value to be deleted
        for (int i = index; i < arr.length - 1; i++) // Shift elements to the left
            arr.A[i] = arr.A[i + 1];
        arr.length--;                       // Decrease the length of the array
        return x;                           // Return the deleted value
    }
    return 0; // Return 0 if deletion was not successful
}

int main() {
    // Initialize an array with some values
    Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    // Delete the element at index 0 and print the deleted value
    cout << "Deleted element: " << Delete(arr1, 0) << endl;

    // Display the updated array
    Display(arr1);

    return 0;
}
