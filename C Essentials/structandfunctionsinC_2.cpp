#include <iostream>
#include <stdio.h>

using namespace std;


struct Rectangle
{
    int length;
    int breadth;
};

/*
 * In this program, finding the area and perimeter of the rectangle
 * Taking input length and breadth from the user
 */

void initialize(struct Rectangle *r, int len, int bre)
{
    r->length = len;
    r->breadth = bre;
}

int area(struct Rectangle r)
{
    return (r.length * r.breadth);
}

int perimeter(struct Rectangle r)
{
    return (2*(r.length + r.breadth));
}

int main()
{
    Rectangle r = {0,0};

    int l, b;
    printf("Enter the Length and breath\n");
    cin >> l >> b;

    initialize(&r, l, b);

    /*Calcuating the area & Perimeter*/
    int a = area(r);
    int peri = perimeter(r);

    printf("Area %d\nPerimeter %d\n", a, peri);

    return 0;
}