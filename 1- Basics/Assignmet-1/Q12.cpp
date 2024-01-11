/*

12.A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask the user to enter marks and print the corresponding grade


*/

#include <iostream>
using namespace std;

int main()
{
    int mark;
    cin >> mark;
    if (mark < 25)
        cout << "F";
    else if (mark >= 25 && mark < 45)
        cout << "E";
    else if (mark >= 45 && mark < 50)
        cout << "D";
    else if (mark >= 50 && mark < 60)
        cout << "C";
    else if (mark >= 60 && mark < 80)
        cout << "B";
    else if (mark >= 80 && mark <= 100)
        cout << "A";
}