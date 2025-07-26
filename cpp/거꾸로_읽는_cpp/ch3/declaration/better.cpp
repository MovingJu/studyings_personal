#include <iostream>
#include "better.h"

void Point::set_x(int x){
    if (MIN_X > x){
        throw std::runtime_error("ValueError");
    }
    if (MAX_X < x){
        throw std::runtime_error("ValueError");
    }
    m_x = x;
}

void Point::set_y(int y){
    if (MIN_Y > y){
        throw std::runtime_error("ValueError");
    }
    if (MAX_Y < y){
        throw std::runtime_error("ValueError");
    }
    m_y = y;
}

