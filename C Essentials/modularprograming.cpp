#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * In this program, finding the area and perimeter of the rectangle
 * Taking input length and breadth from the user
 */

int area(int len, int bre)
{
    return (len * bre);
}

int perimeter(int len, int bre)
{
    return (2*(len + bre));
}

int main()
{
    int length = 0, breadth = 0;

    printf("Enter the Length and breath\n");
    cin >> length >> breadth;

    /*Calcuating the area & Perimeter*/
    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    printf("Area %d\nPerimeter %d\n", a, peri);

    return 0;
}