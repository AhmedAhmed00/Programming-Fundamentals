
/*

4. Write a program that allows the user to insert two integers N and M and print the
summation of all numbers between N and M.
Example:
input: 5 8.
output: 26.


*/
#include <iostream>

using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int min_num = min(n1, n2);
    int max_num = max(n1, n2);
    int sum = 0;
    for (size_t i = min_num; i <= max_num; i++)
    {
        sum += i;
    }
    cout << sum;
}
