#include <iostream>

class Point {
    private:
        int m_x, m_y;

        enum {
            MIN_X = 0,
            MAX_X = 100,
            MIN_Y = 0,
            MAX_Y = 100
        };
    
    public:
        void set_x(int x);
        void set_y(int y);
        int get_x();
        int get_y();
};

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

inline int Point::get_x(){
    return m_x;
}

inline int Point::get_y(){
    return m_y;
}

int main(){

    Point pt;
    pt.set_x(100);
    pt.set_y(80);
    std::cout << pt.get_x() << ", " << pt.get_y() << '\n';

    return 0;
}