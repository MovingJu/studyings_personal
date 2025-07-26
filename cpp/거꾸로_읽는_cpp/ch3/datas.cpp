#include <iostream>
#include <string>

struct STUDENT {
    std::string name;
    int kor, eng, math;
    int tot;
    float avg;
};

void set_student(STUDENT* pstdnt, const std::string& name, int kor, int eng, int math) {
    pstdnt->name = name;
    pstdnt->kor = kor;
    pstdnt->eng = eng;
    pstdnt->math = math;
}

int calc_tot(STUDENT* pstdnt) {
    pstdnt->tot = pstdnt->kor + pstdnt->eng + pstdnt->math;
    return pstdnt->tot;
}

float calc_avg(STUDENT* pstdnt) {
    pstdnt->avg = calc_tot(pstdnt) / 3.0f;  // 실수 나눗셈 주의!
    return pstdnt->avg;
}

int main() {
    STUDENT stdnt[5];

    set_student(&stdnt[0], "MovingJu", 50, 80, 100);

    std::cout << stdnt[0].name << ": " << calc_tot(&stdnt[0]) << ", " << calc_avg(&stdnt[0]) << std::endl;

    return 0;
}
