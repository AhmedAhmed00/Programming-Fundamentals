/*

4. Write a program to compute the perimeter and area of a rectangle. Your code
should ask the user to insert the width and the height
Input(example)
Width = 5
Height = 3
Output
The perimeter = 16
The area = 15

*/

#include <iostream>

using namespace std;

int main()
{
    float width, height;
    cin >> width >> height;
    float area = width * height;
    float perimeter = 2 * (width + height);

    cout << "perimeter = " << perimeter << endl
         << "area = " << area;
}
