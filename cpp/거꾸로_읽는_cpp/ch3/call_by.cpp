#include <iostream>
#include <string>

// headers
void swap(int* a, int* b);
void swap(int& a, int& b);

int main(){

    int a, b;
    a = 10;
    b = 20;

    swap(&a, &b); // call by address
    std::cout << a << ", " << b << std::endl;
    
    swap(a, b); // call by reference
    std::cout << a << ", " << b << std::endl;

    return 0;
}

void swap(int* a, int* b){
    // call by address
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int& a, int& b){
    // call by reference
    int temp = a;
    a = b;
    b = temp;
}