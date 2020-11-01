#include <iostream>
#include "shapes.h"

int main() {
    Rectangle r(5,6);
    Square s(5);
    Circle c(1);

   
    std::cout << r.str() << std::endl;
    std::cout << s.str() << std::endl;
    std::cout << c.str() << std::endl;
    return 0;
}


