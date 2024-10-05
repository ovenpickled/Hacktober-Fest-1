#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    int count = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
         str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;

    // count - 1 ko hata diya kyuki obv we want accurate count and cin can only accept one string not mulitple have to use getline method and added capital letters
    return 0;
}
