#include <iostream>
using namespace std;

int main() {
    // Static Array: Memory is allocated at compile time
    int A[5] = {2, 4, 6, 8, 10}; // Fixed-size array of 5 integers

    // Dynamic Array: Memory is allocated at runtime
    int* p; // Pointer to dynamically allocated memory

    // Allocate memory for 5 integers using 'new'
    p = new int[5];

    // Initialize the dynamic array
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    // Display elements of the static array
    cout << "Static Array A: ";
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Display elements of the dynamic array
    cout << "Dynamic Array p: ";
    for (int i = 0; i < 5; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // Deallocate memory for dynamic array
    delete[] p;

    return 0;
}
