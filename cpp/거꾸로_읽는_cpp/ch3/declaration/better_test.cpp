#include <iostream>
#include "better.h"

int main(){

    Point pt;
    pt.set_x(100);
    pt.set_y(80);
    std::cout << pt.get_x() << ", " << pt.get_y() << '\n';

    return 0;
}