#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int kor, eng, math;
        float tot, avg;
    
    public:
        void print(){
            cout << "name = " << name << endl;
            cout << "scores\tkor\teng\tmath\ttot\tavg" << endl;
            cout << "\t" << kor << '\t' << eng << '\t' << math << '\t' << tot << '\t' << avg << endl;
        }
};

int main(){

    Student stdnt;
    stdnt.name = "MovingJu";
    stdnt.kor = 50;
    stdnt.math = 100;
    stdnt.eng = 90;
    stdnt.tot = stdnt.kor + stdnt.math + stdnt.eng;
    stdnt.avg = stdnt.tot/3;

    stdnt.print();

    return 0;
}