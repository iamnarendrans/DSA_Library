#include <iostream>
using namespace std;


int pow_using_recursion(int m, int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return pow_using_recursion(m, n-1) * m;
    }
}

int pow_using_formula(int m,int n)
 {
    if(n==0)
        return 1;
    if(n%2==0)
        return pow_using_formula(m*m,n/2);
    return m * pow_using_formula(m*m,(n-1)/2);
 }

int main()
{   
    cout << pow_using_recursion(2, 5) << endl;
    cout << pow_using_formula(2, 5) << endl;

    return 0;
}