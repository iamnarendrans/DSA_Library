#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


/*Definition of a structure*/
struct Rectangle
{
    /* data */
    int length; 
    int breath;
};

int main()
{
    int a = 10; // Declaring and initialising a integer
    int *p;     // Integer pointer
    p = &a;     // Dereferencing the address of the integer a to store the address that into a integer pointer p

    cout << a << endl;
    printf("Using the pointer %d\n", *p); // Printing the value
    printf("Using the pointer %d\n", p);  // Address of the variable A

    /*Pointer to an array concept*/
    int A[5] = {2, 4, 6, 8, 10}; // Created in a stack memory
    int *f;
    // q = &A[0];
    f = A; // Both the above line and this is same

    /*Print the array using the array name*/
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }

    /*Printing the array using the pointer*/
    for (int i = 0; i < 5; i++)
    {
        cout << f[i] << endl;
    }

    int *q;
    q = new int[5]; // Created in a heap memory in C++
    // q = (int *)malloc(5 * sizeof(int)); // Created in a heap memory
    q[0] = 10;
    q[1] = 20;
    q[2] = 30;
    q[3] = 40;
    q[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    /*Deleting the memory*/
    delete[] q;
    // free(q) // In C language

    /*Declaring a differnet types of pointer*/
    int *k1;
    char *k2;
    float *k3;
    double *k4;
    struct Rectangle *k5;

    /*Size of the pointer is independed of the type of the pointer, 
    it will always take the size of the address depends
    upon the compiler architecture*/
    cout << sizeof(k1) << endl;
    cout << sizeof(k2) << endl;
    cout << sizeof(k3) << endl;
    cout << sizeof(k4) << endl;
    cout << sizeof(k5) << endl;
    return 0;
}