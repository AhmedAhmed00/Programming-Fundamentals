/*

7. Write a program that allows the user to insert an integer then print negative if it
is a negative number otherwise print positive.
Example
Input -5
Output negative
Example2
Input 10
Output positive


*/

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "positive";
    }
    else if (num < 0)
    {
        cout << "negative";
    }
    else
    {
        cout << "Number is zero";
    }
}