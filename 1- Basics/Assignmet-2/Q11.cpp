
/*
11. Write a program to take 10 numbers from the user and find the second max.
Example:
Input: 5 8 3 11 6 4 2 7 1 9
Output: 9

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int max_num = 0;
    int sec_max = 0;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> n;
        if (n > max_num)
        {
            sec_max = max_num;
            max_num = n;
        }
        else if (n > sec_max && n != max_num)
        {
            sec_max = n;
        }
    }
    cout << sec_max;
}