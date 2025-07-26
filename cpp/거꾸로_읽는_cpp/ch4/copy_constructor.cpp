#include <iostream>

#ifndef __MYSTRING_H__
#define __MySTRING_H__

class MyString {
    private:
        char* m_str;
        int m_len;
    public:
        MyString();
        MyString(char* str);
        ~MyString();

        MyString(const MyString& src){ 
            // const를 이용해서 destructor가 프로그램 종료시 호출되게 하고, (&)를 이용해서 객체를 한번 더 생성하는 짓거리를 없앤다.
            m_len = src.m_len;
            m_str = (char*) malloc(m_len + 1);
            strcpy(m_str, src.m_str);
        }

        char* c_str(){
            return m_str;
        }
};

#endif

int main(){

    MyString str1 = (char*) "Hellow world";
    MyString str2 = str1; // str1의 m_str객체가 2번 소멸하는 문제가 발생한다. 심지어 런타임 에러.
    // 할당이 없었으면 (=)는 단순 값복사(shallow copy)이기에 문제가 안됨. 하지만, m_str은 포인터 값을 가지므로 문제 발생.
    // 따라서 m_str객체의 주소를 서로 다르게 하는 copy constructor가 필요함.

    std::cout << str2.c_str() << std::endl;

    return 0;
}

MyString::MyString(){
    m_str = nullptr;
}
MyString::MyString(char* str){
    m_len = strlen(str);
    m_str = (char*) malloc(m_len + 1);
    strcpy(m_str, str);
}
MyString::~MyString(){
    free(m_str);
}