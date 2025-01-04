#include <iostream>
using namespace std;

// Class definition for Array
class Array
{
private:
    int *A; // Pointer to hold the array of integers
    int size; // Size of the array
    int length; // Number of elements currently in the array

    // Function to swap two integer values
    void swap(int *x, int *y);

public:
    // Default constructor to initialize array size to 10
    Array()
    {
        size = 10;
        length = 0;
        A = new int[size];
    }

    // Parameterized constructor to initialize array size based on input
    Array(int sz)
    {
        size = sz;
        length = 0;
        A = new int[size];
    }

    // Destructor to release the dynamically allocated memory
    ~Array()
    {
        delete[] A;
    }

    // Function declarations for various operations on the array
    void Display();  // Display all elements
    void Append(int x);  // Append an element to the array
    void Insert(int index, int x);  // Insert element at a specific index
    int Delete(int index);  // Delete element at a specific index
    int LinearSearch(int key);  // Linear search for an element
    int BinarySearch(int key);  // Binary search for an element
    int Get(int index);  // Get element at a specific index
    void Set(int index, int x);  // Set element at a specific index
    int Max();  // Get the maximum value in the array
    int Min();  // Get the minimum value in the array
    int Sum();  // Get the sum of all elements in the array
    float Avg();  // Get the average of all elements in the array
    void Reverse();  // Reverse the array using auxiliary space
    void Reverse2();  // Reverse the array in place
    void InsertSort(int x);  // Insert a value while keeping the array sorted
    int isSorted();  // Check if the array is sorted
    void Rearrange();  // Rearrange the array with negative numbers on one side and positive numbers on the other
    Array* Merge(Array arr2);  // Merge two sorted arrays
    Array* Union(Array arr2);  // Find union of two arrays
    Array* Diff(Array arr2);  // Find difference between two arrays
    Array* Inter(Array arr2);  // Find intersection of two arrays
};

// Display all elements in the array
void Array::Display()
{
    int i;
    cout << "\nElements are\n";
    for (i = 0; i < length; i++)
        cout << A[i] << " ";
}

// Append an element at the end of the array
void Array::Append(int x)
{
    if (length < size)
        A[length++] = x;
}

// Insert an element at a specific index in the array
void Array::Insert(int index, int x)
{
    int i;
    if (index >= 0 && index <= length)
    {
        for (i = length; i > index; i--)
            A[i] = A[i - 1];
        A[index] = x;
        length++;
    }
}

// Delete an element at a specific index in the array
int Array::Delete(int index)
{
    int x = 0;
    int i;

    if (index >= 0 && index < length)
    {
        x = A[index];
        for (i = index; i < length - 1; i++)
            A[i] = A[i + 1];
        length--;
        return x;
    }

    return 0;
}

// Swap two integers
void Array::swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Perform a linear search for an element
int Array::LinearSearch(int key)
{
    int i;
    for (i = 0; i < length; i++)
    {
        if (key == A[i])
        {
            swap(&A[i], &A[0]); // Move the found element to the front
            return i;
        }
    }
    return -1;
}

// Perform a binary search for an element
int Array::BinarySearch(int key)
{
    int l, mid, h;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
            return mid;
        else if (key < A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

// Get the element at a specific index
int Array::Get(int index)
{
    if (index >= 0 && index < length)
        return A[index];
    return -1;
}

// Set the element at a specific index
void Array::Set(int index, int x)
{
    if (index >= 0 && index < length)
        A[index] = x;
}

// Find the maximum value in the array
int Array::Max()
{
    int max = A[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}

// Find the minimum value in the array
int Array::Min()
{
    int min = A[0];
    int i;
    for (i = 1; i < length; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

// Calculate the sum of all elements in the array
int Array::Sum()
{
    int s = 0;
    int i;
    for (i = 0; i < length; i++)
        s += A[i];

    return s;
}

// Calculate the average of all elements in the array
float Array::Avg()
{
    return (float)Sum() / length;
}

// Reverse the array using auxiliary space
void Array::Reverse()
{
    int *B;
    int i, j;

    B = (int *)malloc(length * sizeof(int)); // Allocate memory for temporary array
    for (i = length - 1, j = 0; i >= 0; i--, j++)
        B[j] = A[i];
    for (i = 0; i < length; i++)
        A[i] = B[i]; // Copy the reversed elements back to original array
}

// Reverse the array in place
void Array::Reverse2()
{
    int i, j;
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        swap(&A[i], &A[j]);
    }
}

// Insert a value while keeping the array sorted
void Array::InsertSort(int x)
{
    int i = length - 1;
    if (length == size)
        return; // Exit if array is full

    while (i >= 0 && A[i] > x)
    {
        A[i + 1] = A[i];
        i--;
    }
    A[i + 1] = x;
    length++;
}

// Check if the array is sorted
int Array::isSorted()
{
    int i;
    for (i = 0; i < length - 1; i++)
    {
        if (A[i] > A[i + 1])
            return 0; // Return 0 if not sorted
    }
    return 1; // Return 1 if sorted
}

// Rearrange the array with negative numbers on one side and positive on the other
void Array::Rearrange()
{
    int i, j;
    i = 0;
    j = length - 1;

    while (i < j)
    {
        while (A[i] < 0)
            i++; // Move i to the right until negative number is found
        while (A[j] >= 0)
            j--; // Move j to the left until positive number is found
        if (i < j)
            swap(&A[i], &A[j]); // Swap the found negative and positive elements
    }
}

// Merge two sorted arrays
Array* Array::Merge(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length); // Allocate memory for merged array

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++]; // Add the smaller element to the merged array
        else
            arr3->A[k++] = arr2.A[j++]; // Add the smaller element to the merged array
    }

    // Copy remaining elements from arr1
    for (; i < length; i++)
        arr3->A[k++] = A[i];

    // Copy remaining elements from arr2
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = length + arr2.length; // Update the length of merged array

    return arr3;
}

// Find the union of two arrays
Array* Array::Union(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length); // Allocate memory for union array

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++]; // Add the smaller element to the union array
        else if (arr2.A[j] < A[i])
            arr3->A[k++] = arr2.A[j++]; // Add the smaller element to the union array
        else
        {
            arr3->A[k++] = A[i++]; // If both elements are equal, add only once
            j++;
        }
    }

    // Copy remaining elements from arr1
    for (; i < length; i++)
        arr3->A[k++] = A[i];

    // Copy remaining elements from arr2
    for (; j < arr2.length; j++)
        arr3->A[k++] = arr2.A[j];

    arr3->length = k; // Update the length of union array

    return arr3;
}

// Find the intersection of two arrays
Array* Array::Inter(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length); // Allocate memory for intersection array

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            i++; // Move to next element in arr1
        else if (arr2.A[j] < A[i])
            j++; // Move to next element in arr2
        else if (A[i] == arr2.A[j])
        {
            arr3->A[k++] = A[i++]; // If both elements are equal, add to intersection array
            j++;
        }
    }

    arr3->length = k; // Update the length of intersection array

    return arr3;
}

// Find the difference between two arrays
Array* Array::Diff(Array arr2)
{
    int i, j, k;
    i = j = k = 0;

    Array *arr3 = new Array(length + arr2.length); // Allocate memory for difference array

    while (i < length && j < arr2.length)
    {
        if (A[i] < arr2.A[j])
            arr3->A[k++] = A[i++]; // Add the element from arr1 if it's not in arr2
        else if (arr2.A[j] < A[i])
            j++; // Skip the element in arr2 if it is not in arr1
        else
        {
            i++;
            j++;
        }
    }

    // Copy remaining elements from arr1
    for (; i < length; i++)
        arr3->A[k++] = A[i];

    arr3->length = k; // Update the length of difference array

    return arr3;
}

// Main function for testing the operations
int main()
{
    Array *arr1;
    int ch, sz;
    int x, index;

    cout << "Enter Size of Array: ";
    cin >> sz;
    arr1 = new Array(sz);

    // Menu for array operations
    do
    {
        cout << "\n\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
            case 1: 
                cout << "Enter an element and index: ";
                cin >> x >> index;
                arr1->Insert(index, x);  // Insert element at specified index
                break;
            case 2: 
                cout << "Enter index: ";
                cin >> index;
                x = arr1->Delete(index);  // Delete element at specified index
                cout << "Deleted Element is " << x;
                break;
            case 3: 
                cout << "Enter element to search: ";
                cin >> x;
                index = arr1->LinearSearch(x);  // Perform linear search
                cout << "Element index: " << index;
                break;
            case 4: 
                cout << "Sum is " << arr1->Sum();  // Display the sum of elements
                break;
            case 5:
                arr1->Display();  // Display the array elements
                break;
        }
    } while (ch < 6);

    return 0;
}
