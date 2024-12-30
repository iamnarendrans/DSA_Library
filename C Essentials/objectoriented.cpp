#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * Here I'm using all the functions inside a structure so that it's public 
 * If it was a class, all the methods inside a class will be private
 * We should give indication as private or public before usage
 * Refer CtoCppClassConvertion.cpp file for detailed explaination
 */

struct Rectangle
{
    int length;
    int breadth;

    void initialize(int len, int bre)
    {
        length = len;
        breadth = bre;
    }

    int area()
    {
        return (length * breadth);
    }

    int perimeter()
    {
        return (2 * (length + breadth));
    }
};

int main()
{
    Rectangle r = {0, 0};

    int l, b;
    printf("Enter the Length and breath\n");
    cin >> l >> b;

    r.initialize(l, b);

    /*Calcuating the area & Perimeter*/
    int a = r.area();
    int peri = r.perimeter();

    printf("Area %d\nPerimeter %d\n", a, peri);

    return 0;
}