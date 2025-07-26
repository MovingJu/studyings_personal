#ifndef __POINT_H__
#define __POINT_H__

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

inline int Point::get_x(){
    return m_x;
}

inline int Point::get_y(){
    return m_y;
}

#endif // __POINT_H__