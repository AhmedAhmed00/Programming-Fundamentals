/*

13.Search for Switch Case and use it to write a program that reads an
integer between 1 and 12 and print the month of the year in English.
● Test Data :
Insert a number between 1 to 12 to get the month name: 8
● Expected Output: August


*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Input a number between 1 to 12 to get the month name" << endl;
    cin >> x;

    switch (x)
    {

    case 1:
        cout << "January ";
        break;
    case 2:
        cout << "february";
        break;
    case 3:
        cout << "March";
        break;
    case 4:
        cout << "April ";
        break;
    case 5:
        cout << "may";
        break;
    case 6:
        cout << "june";
        break;
    case 7:
        cout << "July";
        break;
    case 8:
        cout << "august";
        break;
    case 9:
        cout << "septemper";
        break;
    case 10:
        cout << "octoper";
        break;
    case 11:
        cout << "november";
        break;
    case 12:
        cout << "december";
    default:
        cout << "default";
        break;
      
    }


    
}
