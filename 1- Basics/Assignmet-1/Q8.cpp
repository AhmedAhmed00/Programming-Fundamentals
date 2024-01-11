/*

8. Write a program to read any digit from 1 to 5, display it as a word
ex : input: 4, output: four


*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3:
        cout << "Three";
        break;
    case 4:
        cout << "Four";
        break;

    default:
        cout << "must be from 1 to 4";
        break;
    }
}