#include <iostream>
#include <stdio.h>
using namespace std;

/*Definition of a structure*/
struct Rectangle
{
    /* data */
    int length;
    int breath;
};


struct Rectangle *fun()
{
    struct Rectangle *p;
    p=new Rectangle;
    // p=(struct Rectangle *)malloc(sizeof(struct Rectangle)); // In C, you would use malloc to allocate memory for a struct
    p->length = 15;
    p->breath = 7;

    return p;
}


/*Defining a function. - Call by value mechanism
If i use call by address mechanism, the values will be affected in main function, 
if i change in the user defined function*/
void fun(struct Rectangle r)
{
    r.length = 20; // It won't affect the actual parameter
    cout << "Length " << r.length << endl
         << "Breadth " << r.breath << endl;
}

int main()
{
    Rectangle r = {10, 5};

    /*Calling the struct and passing struct as parameter*/
    fun(r);

    printf("Length %d\nBreadth %d\n", r.length, r.breath);

    /*Returing a pointer to a structure method*/
    struct Rectangle *ptr = fun();
    cout << "Length " << ptr->length << endl << "Breadth " << ptr->breath << endl;

    return 0;
}