
/*

9. Write a program to take 10 numbers from the user and count the odd numbers .
Example:
Input: 5 8 3 11 6 4 2 7 1 9
Output: 7



*/

#include <iostream>
using namespace std;

int main()
{
    int odds_count = 0;
    int num;
    for (size_t i = 0; i < 10; i++)
    {
        cin >> num;
        if (num % 2 == 1 || num == 1)
        {
            odds_count++;
        }
    }
    cout << odds_count;
}