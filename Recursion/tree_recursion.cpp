#include <iostream>
using namespace std;

// Function to demonstrate Tree Recursion
void fun(int n) {
    /*
        Base Case:
        - The recursion stops when n <= 0.
        - This ensures the recursion terminates properly.
    */
    if (n > 0) {
        /*
            Print Current Value:
            - Print the current value of 'n' before making recursive calls.
        */
        cout << n << " ";

        /*
            Recursive Calls:
            - The function calls itself twice with (n - 1).
            - This creates a tree-like structure:
                - The first call generates the left subtree.
                - The second call generates the right subtree.
        */
        fun(n - 1); // First recursive call
        fun(n - 1); // Second recursive call
    }
}

int main() {
    /*
        Initial Call:
        - The recursion starts with the value '3'.
        - The function generates a sequence of numbers in a tree recursion manner.
    */
    fun(3); // Start recursion with n = 3

    return 0;
}
