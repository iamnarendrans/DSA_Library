#include <iostream>
#include <stdio.h>
using namespace std;

/*Definition of a structure*/
struct Rectangle
{
    /* data */
    int length; 
    int breath;
    char x;
};

// Global Declaration if we want
// struct Rectangle r1;

int main()
{
    // Declaring a structure as variable named r1
    struct Rectangle r1={10,5};

    /*Assigning the value to the structure element individually*/
    r1.length = 15;
    r1.breath = 30;

    /*Accessing a member of a structure and printing that*/
    cout << r1.length << endl;
    cout << r1.breath << endl;

    printf("%d\n", sizeof(r1));

    return 0;
}