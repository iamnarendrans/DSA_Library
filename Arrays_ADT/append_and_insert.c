#include<stdio.h>

// Define a structure to represent an array
struct Array {
    int A[10];  // Fixed-size array of 10 elements
    int size;   // Maximum size of the array
    int length; // Current number of elements in the array
};

// Function to display the elements of the array
void Display(struct Array arr) {
    int i;
    printf("\nElements are\n");
    for(i = 0; i < arr.length; i++) // Iterate through the array
        printf("%d ", arr.A[i]);    // Print each element
}

// Function to append an element to the end of the array
void Append(struct Array *arr, int x) {
    if(arr->length < arr->size)          // Ensure there is space in the array
        arr->A[arr->length++] = x;       // Add the element and increment length
}

// Function to insert an element at a specific index in the array
void Insert(struct Array *arr, int index, int x) {
    int i;

    if(index >= 0 && index <= arr->length) { // Check if the index is valid
        for(i = arr->length; i > index; i--) // Shift elements to the right
            arr->A[i] = arr->A[i-1];
        arr->A[index] = x;                  // Insert the new element
        arr->length++;                      // Increment the array length
    }
}

int main() {
    // Initialize an array with some values
    struct Array arr1 = {{2, 3, 4, 5, 6}, 10, 5};

    // Append 10 to the array
    Append(&arr1, 10);

    // Insert 12 at index 0
    Insert(&arr1, 0, 12);

    // Display the updated array
    Display(arr1);

    return 0;
}
