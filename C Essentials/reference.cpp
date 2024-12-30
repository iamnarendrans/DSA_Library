#include <iostream>
using namespace std;

/*
 * Referencing was only applicable in C++ not in C language
 */

int main()
{
    /*Defining a integer variable and creating a reference for that variable*/
    int a = 10;
    int &r = a;

    /*If i want to change a, i can change any of the variable from a or r*/
    cout << a << endl
         << r << endl;

    int c = 15;
    int d = c;

    /*Before changing the value of c*/
    cout << c << endl
         << d << endl;

    d = 20;

    /*After changing the value of b beacause, this is not a referencing*/
    cout << c << endl
         << d << endl;

    return 0;
}