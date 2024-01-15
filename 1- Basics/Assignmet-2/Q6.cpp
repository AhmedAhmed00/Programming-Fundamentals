

/*

6. Write a program that allows the user to insert infinite integers until insert negative
number then print the max integer.
Example
Input 5 3 8 7 9 4 -1
Output 9


*/

#include <iostream>

using namespace std;
int main()
{
    int n;
    int max = 0;

    do
    {
        cin >> n;
        n > max ? max = n : max;

    } while (n >= 0);
    cout << max;
}