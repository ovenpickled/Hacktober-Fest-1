#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0, digit;
    cout << "Enter an integer: ";
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        sum = digit + sum;
        num = num / 10;
    }
    cout << "Sum of digits is: " << sum << endl;
    return 1;

    // gakat jage pe % aur / % is used to etract last digit and / to reduce the digits by one
    // this question calculates digits sum
}
