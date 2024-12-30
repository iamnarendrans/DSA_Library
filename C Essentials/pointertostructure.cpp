#include <iostream>
#include <stdio.h>
using namespace std;
#include <stdlib.h>

/*Definition of a structure*/
struct Rectangle
{
    /* data */
    int length;
    int breath;
};

int main()
{
    struct Rectangle r = {10, 5};
    // Rectangle r = {10,5}; // This is also valid struct without a key word in C++
    cout << r.length << endl;
    cout << r.breath << endl;

    Rectangle *p = &r; // Pointer to structure
    cout << p->length << endl;
    cout << p->breath << endl;

    /*Create a object of rectangle in a heap*/
    Rectangle *q;
    // q = (struct Rectangle *)malloc(sizeof(Rectangle)); // Allocating memory in heap in C language
    q = new Rectangle; // Allocation of memory in heap using C++

    /*Setting the element values using the pointer*/
    q->length = 15;
    q->breath = 7;

    cout << q->length << endl;
    cout << q->breath << endl;

    return 0;
}