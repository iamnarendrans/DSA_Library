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

void initialize(struct Rectangle *r, int len, int bre);
int area(struct Rectangle r);
void changeLength(struct Rectangle *r, int len);
void changeBreadth(struct Rectangle *r, int bre);

void initialize(struct Rectangle *r, int len, int bre)
{
    r->length = len;
    r->breath = bre;
}
int area(struct Rectangle r)
{
    return (r.breath * r.length);
}
void changeLength(struct Rectangle *r, int len)
{
    r->length = len;
}
void changeBreadth(struct Rectangle *r, int bre)
{
    r->breath = bre;
}

int main()
{
    struct Rectangle r;

    initialize(&r, 10, 5);
    area(r);
    changeLength(&r, 20);
    changeBreadth(&r, 15);
    return 0;
}
