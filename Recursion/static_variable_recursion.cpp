#include <stdio.h>

// Function definition with a static variable
int fun(int n) {
    /*
        Static Variable:
        - 'x' is declared as static, which means it retains its value between function calls.
        - It is initialized only once and maintains its value as the recursion progresses.
    */
    static int x = 0;

    if (n > 0) {
        /*
            Increment the static variable 'x':
            - Each time the function is called with n > 0, 'x' is incremented by 1.
        */
        x++;

        /*
            Recursive Call:
            - The function is called with (n - 1).
            - The return value is the result of the recursive call plus the current value of 'x'.
        */
        return fun(n - 1) + x;
    }

    /*
        Base Case:
        - When n <= 0, the recursion stops, and the function returns 0.
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
