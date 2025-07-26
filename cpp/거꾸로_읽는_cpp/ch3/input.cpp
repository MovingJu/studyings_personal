#include <iostream>

int main(){

    std::string str;
    std::cout << "name?: ";
    std::getline(std::cin, str);
    
    std::cout << "thanks, " << str << std::endl;

    return 0;
}