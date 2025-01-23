#include <iostream>
using namespace std;

int main()
{   
    char s[] = "Narendran";
    int i;
    for(i = 0; s[i] != '\0'; i++){};
    cout << "The length of the string is: " << i << endl;
    return 0;
}