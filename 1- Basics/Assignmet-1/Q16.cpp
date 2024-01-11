/*

18.13.Write a program that take 3 integer from user then print the max element and
the min element.
● Example
Input 7 8 5
Output
max element = 8
min element = 5
● Example2
Input 3 6 9
Output
Max element = 9
Min element = 3

*/

#include <iostream>

using namespace std;

int main()
{
  
        int x, y, z;
        cout << "enter number";
        cin >> x >> y >> z;
        int minimum, maximum;
        minimum = maximum = x;

        if (y > maximum)
            maximum = y;
        else if (y < minimum)
            minimum = y;

        if (z > maximum)
            maximum = z;
        else if (z < minimum)
            minimum = z;

        cout << "minimum is " << minimum;
        cout << "maximum is " << maximum;
        return 0;
    
}
