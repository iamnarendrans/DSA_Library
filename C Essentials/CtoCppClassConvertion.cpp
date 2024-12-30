#include <iostream>
#include <stdio.h>
using namespace std;

/*
 * Refer the structandfunctionsinC.cpp file for the comparison from C to C++ class convertion scenario
 */

/*Definition of a structure*/
class Rectangle
{
private:
    /* data */
    int length;
    int breath;

public:
    Rectangle(int len, int bre)
    {
        length = len;
        breath = bre;
    }
    int area()
    {
        return (breath * length);
    }
    void changeLength(int len)
    {
        length = len;
    }
    void changeBreadth(int bre)
    {
        breath = bre;
    }
};

int main()
{
    Rectangle r(10, 5); // This is an object now

    r.area();
    r.changeLength(20);
    r.changeBreadth(15);
    return 0;
}
