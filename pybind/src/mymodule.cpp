#include <pybind11/pybind11.h>

int square(int a){
    return a * a;
}

PYBIND11_MODULE(mymodule, m){
    m.def("square", &square, "squarer");
}