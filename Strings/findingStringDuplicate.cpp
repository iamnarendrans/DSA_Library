#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;


int main()
{
    char a[] = "finding"; // Declare and initialize a character array (mutable string)]
    int H[26] = {0}, i;

    for(i = 0; a[i] != '\0'; i++) 
    {
        H[a[i] - 97] += 1;
    }

    for(i = 0; i < 26; i++) 
    {
        if(H[i] > 1) 
        {
            cout << "Character " << (char)(i + 97) << " appears " << H[i] << " times" << endl;
        }
    }

    return 0;
}