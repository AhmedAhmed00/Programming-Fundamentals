/*

3. write a program that ask the user to insert 3 integers then print the average as
decimal number
Input
Please enter first number:
6
Please enter second number
4
Please enter third number
4
Output
The average = 4.66667

*/

#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    float avg = (n1 + n2 + n3) / 3;

    cout << avg;

    return 0;
}
