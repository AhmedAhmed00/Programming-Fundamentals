/*

10.Write a program that reads a year then check if a year is a leap year or not: a
leap year is divisible by 400 or 4 only



*/

#include <iostream>
using namespace std;
int main()
{

    int y;
    cin >> y;
    if (y % 4 == 0 || y % 400 == 0)

        cout << "Leap";

    else cout << "not leap";
   
}