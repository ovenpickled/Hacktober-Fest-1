#include <iostream>
int factorial(int x)
{
    if (x <= 1)
        return 1;
    return x * factorial(x - 1);
}

// incorrect variable names + wasn't doing n - 1 to do factorial logic plus return 0 toh bc sab *= 0 hogana
int main()
{
    std::cout << "Factorial: " << factorial(5);
    return 0;
}
