#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*Definiton of user defined function*/
int add(int a, int b);

/*User Defined function with return type of int with a temporary parameters of a, b and sum*/
int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int main()
{
    int num1 = 10, num2 = 20, sum = 0;

    /*Function calling and passing two action parameters num1, num2*/
    sum = add(num1, num2);
    cout << "Sum is " << sum << endl;
    return 0;
}
