
/*
6. Write a program to convert a given integer (in seconds) to hours,
minutes and seconds.
Input seconds: 25300
Expected Output: H:M:S - 7:1:40

*/

#include <iostream>

using namespace std;

int main()
{
    int x, hours, mint, sec;
    cin >> x;
    hours = x / 60 / 60;
    mint = (x % (60 * 60)) / 60;
    sec = x - 60 * 60 * hours - 60 * mint;
    cout << hours << endl
         << mint << endl
         << sec;
    return 0;
}
