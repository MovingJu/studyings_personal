#include <iostream>

// declaration form of struct and class are exactly same, so does memory allocation.

struct STUDENT{
    public:
        std::string name;
        int kor, eng, math;
        float tot, avg;
};

class Student {
    public:
        std::string name;
        int kor, eng, math;
        float tot, avg;
};

int main(){

    STUDENT stdnt = {"Movingju", 50, 90, 100, };
    // Student stdnt = {"Movingju", 50, 90, 100, }; Class can't do this.
    
    std::cout << stdnt.name << std::endl;

    return 0;
}