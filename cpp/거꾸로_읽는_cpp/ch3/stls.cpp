#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double pi = 3.1415;
    int i = 16;

    cout << pi << endl;
    cout << setw(10) << setfill('0') << pi << endl;
    cout << setprecision(3) << pi << endl;
    cout << "dec = " << setbase(10) << i << endl;
    cout << "hex = " << setbase(16) << i << endl;
    cout << "oct = " << setbase(8) << i << endl;
    

    return 0;
}