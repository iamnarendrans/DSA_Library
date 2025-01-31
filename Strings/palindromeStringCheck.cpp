#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;

int main()
{
    char a[] = "madam"; // Declare and initialize a character array (mutable string)
    int i, j;
    for (j = 0; a[j] != '\0'; j++) {} // Loop to find the null-terminator
    j = j - 1;  // Adjust j to point to the last valid character (before '\0')
    for(i = 0; i < j; i++, j--) 
    {
        if(a[i] != a[j]) {
            break;
        }
    }
    if(i >= j) {
        cout << "String is a palindrome" << endl;
    } else {
        cout << "String is not a palindrome" << endl;
    }

    return 0;

}