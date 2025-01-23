#include <iostream>
using namespace std;
/*
 * This program changes the case of the characters in a string.
 * If the character is in uppercase, it converts it to lowercase.
 * If the character is in lowercase, it converts it to uppercase.
 * The program uses the ASCII values of the characters to change the case.
 * The ASCII values of the uppercase letters are from 65 to 90.
 * The ASCII values of the lowercase letters are from 97 to 122.
 * The program uses a for loop to iterate through the string.
 * The loop continues until the null character is encountered.
 * The program checks if the character is in uppercase or lowercase.
 * If the character is in uppercase, it converts it to lowercase.
 * If the character is in lowercase, it converts it to uppercase.
 * The program prints the modified string.
 * The program returns 0 to the operating system.
 * The program uses the iostream library to provide input and output capabilities.
 * The program uses the std namespace.
 * The program defines the main function that returns an integer.
 * The program defines a character array s with the string "helloworld".
 * The program defines an integer i.
 * The program uses a for loop to iterate through the string.
 * The loop continues until the null character is encountered.
 */
int main()
{
    char s[] = "helloworld";
    int i;
    for(i = 0; s[i] != '\0' ;i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
        else if(s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    cout << s << endl;
    return 0;
}