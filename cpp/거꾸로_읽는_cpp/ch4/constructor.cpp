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
        Point(){
            std::cout << "Initialized!" << '\n';
            set_x(0);
            set_y(0);
        }
        Point(int xy){
            std::cout << "Initialized!" << '\n';
            set_x(xy);
            set_y(xy);
        }
        Point(int x, int y){
            std::cout << "Initialized!" << '\n';
            set_x(x);
            set_y(y);
        }

        void set_x(int x);
        void set_y(int y);
        int get_x();
        int get_y();

};

void show(Point pt);

int main(){

    // 3가지 선언방법
    Point pt;
    Point pt1[] = {Point(), Point(30), Point(30, 60)};
    show(Point(30));

    return 0;
}

void show(Point pt){
    std::cout << pt.get_x() << ", " << pt.get_y() << '\n';
}

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

