#include <iostream>

using namespace std;

int main(){

    c_malloc();
    cpp_new();

    return 0;
}

void c_malloc(){
    int* pint = (int*) malloc(10*sizeof(int));

    for (int i=0; i<10; i++){
        pint[i] = i*10;
    }
    for (int i=0; i<10; i++){
        cout << "pint[" << i << "] = " << pint[i] << '\n';
    }

    free(pint);

    return;
}

void cpp_new(){
    int* pint = new int[10];

    for (int i=0; i<10; i++){
        pint[i] = i*10;
    }
    for (int i=0; i<10; i++){
        cout << "pint[" << i << "] = " << pint[i] << '\n';
    }

    delete[] pint;

    return;
}