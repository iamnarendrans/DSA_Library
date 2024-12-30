#include <iostream>
using namespace std;

/*Using Arithmetic progression formula*/
int sum_using_formula(int n)
{
    return ((n * (n + 1)) / 2);
}

/*Using simple loop*/
int sum_using_loop(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i;
    }
    return s;
}

/*Using recursion*/
int sum_using_recursion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (sum_using_recursion(n - 1) + n);
    }
}

int main()
{
    cout << "SUM using formula " << sum_using_formula(10) << endl;
    cout << "SUM using loop " << sum_using_loop(10) << endl;
    cout << "SUM using recursion " << sum_using_recursion(10) << endl;

    return 0;
}