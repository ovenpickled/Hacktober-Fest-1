#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << endl;
        
    }
    cout << "This will never be printed";
    return 0;

    // return should be at the end of he function for the cout to print the message
}
