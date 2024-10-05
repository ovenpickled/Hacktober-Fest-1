#include <iostream>
struct Point{

    int x;
    int y;
};

// C++ me bhai classes hai this is C stuff but basically it's like your own data type

int main()
    {
        Point p = {10, 20};
        std::cout << "x: " << p.x << ", y: " << p.y;
        return 0;
    }

