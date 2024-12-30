#include <iostream>
using namespace std;

// Recursive function to solve Tower of Hanoi
void TOH(int n, int A, int B, int C) {
    // Base case: If there are no disks, return
    if (n > 0) {
        // Step 1: Move n-1 disks from rod A to rod B using rod C as auxiliary
        TOH(n - 1, A, C, B);
        
        // Step 2: Move the nth disk directly from rod A to rod C
        cout << "(" << A << " -> " << C << ")" << endl;
        
        // Step 3: Move the n-1 disks from rod B to rod C using rod A as auxiliary
        TOH(n - 1, B, A, C);
    }
}

int main() {
    int n = 4; // Number of disks

    // Solve Tower of Hanoi for 4 disks, where:
    // Rod 1 (A) is the source, Rod 2 (B) is auxiliary, Rod 3 (C) is the destination
    TOH(n, 1, 2, 3);

    return 0;
}
