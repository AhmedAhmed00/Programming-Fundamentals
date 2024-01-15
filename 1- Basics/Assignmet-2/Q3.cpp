
/*

3. Write a program i to display the multiplication table of a given integer
Example
Input 5
Output
1*5 = 5
2*5 = 10
...
...
12*5 = 60

*/
#include <iostream>
using namespace std;
int main()
{

    int num;
    cin >> num;
    for (size_t i = 1; i <= 12; i++)
    {
        cout << i << " * " << num << " = " << num * i << endl;
    }
}