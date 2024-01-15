

/*
5. Write a program that allows the user to insert infinite integers until insert negative
number then print summation of all integers
Example
Input 5 7 8 3 2 -1
Output 25
*/

#include <iostream>

using namespace std;
int main()
{
    int n;
    int sum = 0;

    do
    {
        cin >> n;

        n >= 0 ? sum += n : sum;

    } while (n >= 0);
    cout << sum;
}