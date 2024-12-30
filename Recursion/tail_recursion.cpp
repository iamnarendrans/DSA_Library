#include <stdio.h>

// This function demonstrates tail recursion, 
// where the recursive call is the last operation performed in the function.
void fun(int n) {
    /*
        Base Case:
        - The recursion stops when n <= 0.
        - This prevents infinite recursion and ensures the program terminates.
    */
    if (n > 0) {
        /*
            Process the current value:
            - Print the value of 'n' before making the recursive call.
            - This ensures the numbers are printed in descending order.
        */
        printf("%d ", n);

        /*
            Recursive Call:
            - The function calls itself with the argument (n - 1).
            - This call is the last operation in the function, making it a tail recursion.
        */
        fun(n - 1);
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
        - Calls the function 'fun' to print numbers from 'x' down to 1.
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
    - Tail recursion is a type of recursion where the recursive call is the final operation in the function.
    - In this example:
        1. The function prints the value of 'n' before calling itself.
        2. This ensures the numbers are printed in descending order.
        3. The recursion stops when the base case (n <= 0) is met.
    - Output for x = 3: "3 2 1"
*/
