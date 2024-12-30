#include <iostream>
using namespace std;

int main() {
    int *p, *q; // Pointers for dynamic memory allocation
    int i;

    // Step 1: Allocate memory for an array of size 5
    p = new int[5]; // Equivalent to malloc in C
    p[0] = 3; p[1] = 5; p[2] = 7; p[3] = 9; p[4] = 11;

    // Step 2: Allocate new memory for an array of size 10
    q = new int[10]; // Larger array

    // Step 3: Copy elements from old array (p) to new array (q)
    for (i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    // Step 4: Free the old memory block
    delete[] p;

    // Step 5: Update pointer p to point to the new array
    p = q;

    // Step 6: Nullify pointer q (optional for clarity)
    q = nullptr;

    // Step 7: Print elements of resized array
    cout << "Elements in resized array:" << endl;
    for (i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }

    // Step 8: Free the final memory allocation
    delete[] p;

    return 0;
}
