#include <stdio.h>

// This function demonstrates head recursion, 
// where the recursive call is made before any other operations in the function.
void fun(int n) {
    /*
        Base Case:
        - The recursion stops when n <= 0.
        - This prevents infinite recursion and ensures the program terminates.
    */
    if (n > 0) {
        /*
            Recursive Call:
            - The function calls itself with the argument (n - 1).
            - This call happens before any other operation, making it a head recursion.
        */
        fun(n - 1);

        /*
            Process the current value:
            - After the recursive call completes, the function prints the value of 'n'.
            - This ensures the numbers are printed in ascending order.
        */
        printf("%d ", n);
    }
}

int main() {
    /*
        Initialization:
        - The variable 'x' is initialized to 3.
        - This value is passed as an argument to the recursive function 'fun'.
    */
    int x = 3;

    /*
        Function Call:
        - Calls the function 'fun' to print numbers from 1 to 'x'.
    */
    fun(x);

    /*
        Program Termination:
        - The program returns 0, indicating successful execution.
    */
    return 0;
}

/*
    Explanation:
    - Head recursion is a type of recursion where the recursive call is made before any operations in the function.
    - In this example:
        1. The function calls itself before printing the value of 'n'.
        2. The recursive calls stack up until the base case (n <= 0) is reached.
        3. As the function returns from each recursive call, the value of 'n' is printed.
    - Output for x = 3: "1 2 3"
*/
