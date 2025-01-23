#include <iostream>
using namespace std;

int main()
{   
    char s[] = "How are you";
    int i, vowels = 0, consonants = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
           s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            vowels++;
        else if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            consonants++;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}