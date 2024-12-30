/****************************************************************************************
 * Execution Tree:
 * 
 * funA(20)
  |
  -> Prints 20, calls funB(19)
      |
      -> Prints 19, calls funA(9)
          |
          -> Prints 9, calls funB(8)
              |
              -> Prints 8, calls funA(3)
                  |
                  -> Prints 3, calls funB(2)
                      |
                      -> Prints 2, calls funA(1)
                          |
                          -> Prints 1, stops recursion
 ****************************************************************************************/

#include <iostream>
using namespace std;

// Function prototype declarations
void funB(int n);
void funA(int n);

/*
    Function funA:
    - Prints the current value of 'n'.
    - Calls funB(n-1) to continue the recursion.
*/
void funA(int n) {
    if (n > 0) {
        cout << n << " ";  // Print current value of n
        funB(n - 1);       // Call funB with n-1
    }
}

/*
    Function funB:
    - Prints the current value of 'n' (only if n > 1).
    - Calls funA(n/2) to continue the recursion.ṇ
*/
void funB(int n) {
    if (n > 1) {
        cout << n << " ";  // Print current value of n
        funA(n / 2);       // Call funA with n/2
    }
}

int main() {
    /*
        Initial Call:
        - The recursion starts with funA(20).
        - The output is generated based on the rules defined in funA and funB.
    */
    funA(20); // Start the indirect recursion with 20

    return 0;
}
