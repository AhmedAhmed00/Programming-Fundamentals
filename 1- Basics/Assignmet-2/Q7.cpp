

/*

7. Enter Number and Count the number of steps required to make the Number
equal to Zero.
->if Number is Odd decrease one from it
->If Number is Even divide it by 2
Example:
Input:15 Output: 7

*/

#include <iostream>

using namespace std;
int main()
{
    int num;
    int counter = 0;
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num -= 1;
        }
        counter++; 
    }
    cout << counter;
}
