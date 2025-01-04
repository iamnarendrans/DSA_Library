#include <stdio.h>
#include <stdlib.h>

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
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}   

// Function to perform union of two arrays (no duplicates)
struct Array* Union(struct Array *arr1, struct Array *arr2) {
    int i = 0, j = 0, k = 0;

    // Dynamically allocate memory for the union array
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    // Merge the arrays and remove duplicates
    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    // Copy remaining elements from arr1
    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];

    // Copy remaining elements from arr2
    while (j < arr2->length)
        arr3->A[k++] = arr2->A[j++];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

// Function to perform intersection of two arrays
struct Array* Intersection(struct Array *arr1, struct Array *arr2) {
    int i = 0, j = 0, k = 0;

    // Dynamically allocate memory for the intersection array
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            i++;
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else if (arr1->A[i] == arr2->A[j]) {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }
    }

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

// Function to perform difference between two arrays (elements in arr1 but not in arr2)
struct Array* Difference(struct Array *arr1, struct Array *arr2) {
    int i = 0, j = 0, k = 0;

    // Dynamically allocate memory for the difference array
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length) {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            j++;
        else {
            i++;
            j++;
        }
    }

    // Copy remaining elements from arr1
    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];

    arr3->length = k;
    arr3->size = 10;

    return arr3;
}

int main() {
    // Initialize two arrays
    struct Array arr1 = {{2, 9, 21, 28, 35}, 10, 5};
    struct Array arr2 = {{2, 3, 9, 18, 28}, 10, 5};

    // Perform union of the two arrays
    struct Array *arr3 = Union(&arr1, &arr2);
    printf("Union of the arrays:\n");
    Display(*arr3);

    // Perform intersection of the two arrays
    struct Array *arr4 = Intersection(&arr1, &arr2);
    printf("Intersection of the arrays:\n");
    Display(*arr4);

    // Perform difference of arr1 - arr2
    struct Array *arr5 = Difference(&arr1, &arr2);
    printf("Difference of arr1 - arr2:\n");
    Display(*arr5);

    // Free the dynamically allocated memory
    free(arr3);
    free(arr4);
    free(arr5);

    return 0;
}
