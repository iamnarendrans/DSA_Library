#include <iostream>

using namespace std;

void function(int A[], int n); // Arrays are always pass by address

void function(int A[], int n)
{
    /*Getting the length of the array*/
    // cout << (sizeof(A)/sizeof(int)) << endl;

    /*Printing*/
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

void func(int *A, int n)
{
    /*Getting the length of the array*/
    // cout << (sizeof(A)/sizeof(int)) << endl;

    A[0] = 15;

    /*Printing*/
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    /*Declaring and assigning a values to an array*/
    int A[] = {2, 4, 6, 8, 10};
    int n = 5;

    function(A, n);
    func(A, n);

    /*Printing that in a for loop*/
    for (int x : A)
    {
        cout << x << " ";
    }

    return 0;
}