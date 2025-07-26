#include <iostream>

using namespace std;

int global_value;

void function1();

int main(){

    int local_value;
    static int static_value;

    cout << "uninitialized global : " << global_value << '\n';
    cout << "uninitialized global : " << local_value << '\n';
    cout << "uninitialized static : " << static_value << '\n';

    function1();

    return 0;
}

void function1(){
    int local_value2;
    cout << "uninitialized local2 : " << local_value2 << '\n';
}