/*


15.Search for ternary operator and use it to write a program that allows the
user to insert integer number then Even or Odd
● Example Input 8 Output even
● Example 2 Input 7 Output odd

*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x % 2 == 0)
        cout << "even";
    else
        cout << "odd";
}
