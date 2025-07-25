#include <pybind11/pybind11.h>

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(cpp, m) {
    m.doc() = "pybind11 cross_language plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
}