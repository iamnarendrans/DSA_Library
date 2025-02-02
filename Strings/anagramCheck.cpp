#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;


int main()
{
    char a[] = "verbose"; // Declare and initialize a character array (mutable string)
    char b[] = "observe"; // Declare and initialize another character array (mutable string)
    int H[26] = {0}, i;
    for(i = 0; a[i] != '\0'; i++) 
    {
        H[a[i] - 97] += 1;
    }
    for(i = 0; b[i] != '\0'; i++) 
    {
        H[b[i] - 97] -= 1;
        if(H[b[i] - 97] < 0) 
        {
            cout << "Strings are not anagrams" << endl;
            break;
        }
    }

    return 0;
}