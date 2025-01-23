#include <iostream>
using namespace std;

int main()
{   
    char s[] = "How are you doing";
    int i, words = 1;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ' && s[i-1] != ' ')
        {
            words++;
        }
    }

    cout << "Number of words in the string are: " << words << endl;
    
    return 0;
}