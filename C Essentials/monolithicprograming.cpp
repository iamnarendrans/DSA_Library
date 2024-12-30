#include <iostream>
#include <stdio.h>

using namespace std;

/*
 * In this program, finding the area and perimeter of the rectangle
 * Taking input length and breadth from the user
 */

int main()
{
    int length = 0, breadth = 0;

    printf("Enter the Length and breath\n");
    cin >> length >> breadth;

    /*Calcuating the area & Perimeter*/
    int area = length * breadth;
    int peri = 2*(length+breadth);

    printf("Area %d\nPerimeter %d\n", area, peri);

    return 0;
}