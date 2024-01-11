/*

17.Write a program that take character from user then if it is vowel chars (a,e,I,o,u)
then print vowel otherwise print consonant
● Example Input o Output vowel
● Example 2 Input b Output consonan

*/

#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    if (c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o')
    {
        cout << "vowel";
    }
    else
    {
        cout << "constant";
    }
}
