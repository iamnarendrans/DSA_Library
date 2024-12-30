#include <stdio.h>

// Global Variable:
int x = 0; // 'x' is a global variable accessible to all function calls.

int fun(int n) {
    /*
        Base Case:
        - The recursion stops when n <= 0.
        - This prevents infinite recursion and ensures the program terminates.
    */
    if (n > 0) {
        /*
            Increment the global variable 'x':
            - Each time the function is called with n > 0, 'x' is incremented by 1.
            - As 'x' is global, its value persists across all recursive calls.
        */
        x++;

        /*
            Recursive Call:
            - The function calls itself with the argument (n - 1).
            - The return value is the result of the recursive call plus the current value of 'x'.
        */
        return fun(n - 1) + x;
    }

    /*
        Return Value:
        - When the base case is reached (n <= 0), the function returns 0.
    */
    return 0;
}

int main() {
    int a = 5; // Initialize variable 'a' to 5

    /*
        Function Call:
        - Calls the function 'fun' with 'a' as the argument.
        - The result is printed using printf.
    */
    printf("%d", fun(a)); // Output the result of the function
    return 0;
}
