#include <iostream>
using namespace std;


/*Using simple loop*/
int factorial_using_loop(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

/*Using recursion*/
int factorial_using_recursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (factorial_using_recursion(n - 1) * n);
    }
}

int main()
{
    cout << "FACTORIAL using loop " << factorial_using_loop(10) << endl;
    cout << "FACTORIAL using recursion " << factorial_using_recursion(10) << endl;

    return 0;
}