#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;

int main()
{
    char A[] = "printer"; // Declare and initialize a character array (mutable string)
    char B[] = "printing"; // Declare and initialize another character array (mutable string)
    int i, j;
    for(i = 0, j = 0; A[i] != '\0' && B[j] != '\0'; i++, j++) 
    {
        if(A[i] != B[j]) {
            break;
        }
    }
    if(A[i] == B[j]) {
        cout << "Strings are equal" << endl;
    } else if(A[i] < B[j]) {
        cout << "String A is lexicographically smaller than string B" << endl;
    } else {
        cout << "String A is lexicographically greater than string B" << endl;
    }
    return 0;
}