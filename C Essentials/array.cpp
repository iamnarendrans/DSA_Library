#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    /* Declaring an integer array and initialising the values to each index*/
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    /*Declaring an integer array and initialising the values to the whole array*/
    int B[] = {2, 4, 6, 8, 10};

    /*Printing the array using for loop*/
    for (int i = 0; i < 5; i++)
    {
        cout << B[i] << endl;
    }

    /*Printing the array using special for loop*/
    for (int x : B)
    {
        cout << x << endl;
    }

    /* Print statments in C and C++*/
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);

    return 0;
}