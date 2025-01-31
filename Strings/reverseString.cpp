#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;

int main() {
    char A[] = "Python"; // Declare and initialize a character array (mutable string)
    char t;              // Temporary variable for swapping
    int i, j;

    // Find the length of the string manually
    for (j = 0; A[j] != '\0'; j++) {} // Loop to find the null-terminator
    j = j - 1;  // Adjust j to point to the last valid character (before '\0')

    // Reverse the string using a two-pointer approach
    for (i = 0; i < j; i++, j--) {
        t = A[i];   // Store the left character in a temporary variable
        A[i] = A[j]; // Swap left with right
        A[j] = t;   // Assign the temporary variable to the right position
    }

    // Print the reversed string
    cout << A << endl; // Using cout instead of printf (C++ style)

    return 0;
}
