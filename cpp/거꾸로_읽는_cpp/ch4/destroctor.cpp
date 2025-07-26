#include <iostream>

#ifndef __MYSTRING_H__
#define __MySTRING_H__

class MyString {
    private:
        char* m_str;
        int m_len;
    public:
        MyString(){
            m_str = nullptr;
        }
        MyString(char* str){
            m_len = strlen(str);
            m_str = (char*) malloc(m_len + 1);
            strcpy(m_str, str);
        }
        ~MyString(){
            free(m_str);
        }
        char* c_str(){
            return m_str;
        }
};

#endif

int main(){

    MyString str1((char*) "Hellow world!");

    std::cout << str1.c_str() << std::endl;


    return 0;
}