#include <iostream>
using namespace std;
int main()
{
    int x = 5, y = 10;
    x = x + y;
    y = x - y;
    x = x - y; // neccesary to eplain lol trying to swap two 
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}
