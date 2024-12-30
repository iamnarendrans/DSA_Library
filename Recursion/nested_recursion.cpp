#include <iostream>
using namespace std;

/*
    Function fun:
    - Demonstrates nested recursion.
    - A function call contains another call to the same function as its argument.
*/
int fun(int n) {
    /*
        Base Case:
        - If n > 100, the recursion stops and returns n - 10.
    */
    if (n > 100) {
        return n - 10;
    }

    /*
        Recursive Case:
        - Calls the function again using the result of another function call as an argument.
        - This creates a "nested" recursion structure.
    */
    return fun(fun(n + 11));
}

int main() {
    int r;

    /*
        Initial Call:
        - Start the recursion with n = 95.
        - The output will be calculated based on nested recursion logic.
    */
    r = fun(95);

    /*
        Print the Result:
        - Output of the recursive computation is printed.
    */
    cout << r << endl;

    return 0;
}
