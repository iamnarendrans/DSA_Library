#include <iostream>  // For standard input/output
#include <cstring>   // For string-related functions (not needed here)
using namespace std;


int main()
{   
    char a[] = "finding"; // Declare and initialize a character array (mutable string)]
    long int H = 0;
    int i;

    for(i = 0; a[i] != '\0'; i++) 
    {
        int x = 1;
        x = x << (a[i] - 97);
        if((x & H) > 0) 
        {
            cout << "Character " << a[i] << " is duplicated" << endl;
        } 
        else 
        {
            H = x | H;
        }
    }
    
    return 0;
}