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

// Function to get the value at a specific index
int Get(const Array& arr, int index) {
    if (index >= 0 && index < arr.length) {
        return arr.A[index];
    }
    return -1; // Return -1 for invalid index
}

// Function to set a value at a specific index
void Set(Array& arr, int index, int x) {
    if (index >= 0 && index < arr.length) {
        arr.A[index] = x;
    }
}

// Function to find the maximum value in the array
int Max(const Array& arr) {
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] > max) {
            max = arr.A[i];
        }
    }
    return max;
}

// Function to find the minimum value in the array
int Min(const Array& arr) {
    int min = arr.A[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.A[i] < min) {
            min = arr.A[i];
        }
    }
    return min;
}

// Function to calculate the sum of all elements in the array
int Sum(const Array& arr) {
    int s = 0;
    for (int i = 0; i < arr.length; i++) {
        s += arr.A[i];
    }
    return s;
}

// Function to calculate the average of all elements in the array
float Avg(const Array& arr) {
    return static_cast<float>(Sum(arr)) / arr.length;
}

int main() {
    // Initialize the array
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};

    // Display operations
    cout << "Sum: " << Sum(arr1) << endl;
    cout << "Max: " << Max(arr1) << endl;
    cout << "Min: " << Min(arr1) << endl;
    cout << "Average: " << Avg(arr1) << endl;

    // Get and Set operations
    cout << "Value at index 3 (Get): " << Get(arr1, 3) << endl;
    Set(arr1, 3, 50);
    cout << "Updated value at index 3 (After Set): " << Get(arr1, 3) << endl;

    // Display the updated array
    Display(arr1);

    return 0;
}
