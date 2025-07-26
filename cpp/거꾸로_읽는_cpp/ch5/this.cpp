#include <iostream>

class Test{
    public:
        std::string test;
    
        void print(){
            std::cout << this->test << std::endl;
        }

};

void print(const Test* dis){
            std::cout << dis->test << "\n";
}

int main(){

    Test t1;
    t1.test = "uhaha";

    Test* const dis = &t1;

    print(dis);

    t1.print();

    return 0;
}