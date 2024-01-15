
/*


8. Write a program to find the power of a number.
Input
Input base: 2
Input exponent: 5
Output:
2^5 = 32


*/

#include <iostream>
using namespace std;
int main()
{
    int base;
    int exponent;
    int resault = 1;
    cin >> base >> exponent;
    for (size_t i = 0; i < exponent; i++)
    {
        resault *= base;
    }
    cout << resault;
}