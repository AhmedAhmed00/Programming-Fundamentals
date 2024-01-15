
/*

10. Write a program to take 2 integers from the user and find the Greatest Common
Divisor of two numbers.
Example:
Input: 25 15
Output: 5



*/

#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    int max_num = max(n1, n2);
    int gcd;
    cin >> n1 >> n2;
    for (size_t i = 1; i <= max_num; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << gcd;
}