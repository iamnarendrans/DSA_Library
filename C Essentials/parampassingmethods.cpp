#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*The program functions.cpp is an example of pass by value method - Ref functions.cpp*/

/* Example of call by address*/
void swap_callby_address(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/* Example of call by reference*/
void swap_callby_reference(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int num1 = 10, num2 = 15;
    swap_callby_address(&num1, &num2); // Call by addressing method
    /*Call by addressing pintout*/
    cout << "First Num is " << num1 << endl;
    cout << "Second Num is " << num2 << endl;

    swap_callby_reference(num1, num2); // Call by Reference  method
    /*Call by addressing pintout*/
    cout << "First Num is " << num1 << endl;
    cout << "Second Num is " << num2 << endl;

    return 0;
}