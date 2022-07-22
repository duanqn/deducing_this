#include <iostream>

#include "container.hpp"

int main()
{
    Container<int> c;
    c.resize(5);
    for (int i = 0; i < 5; ++i) {
        c.at(i) = i;
    }

    int x = std::as_const(c).at(4);

    std::cout << "Hello World!\n";
    std::cout << c.at(1) << std::endl;
    std::cout << x << std::endl;
}
