# 객체의 크기

```cpp
#include <iostream>
class Test{
    public:
        int test;
        void print(){
            std::cout << this->test << std::endl;
        }
};
int main(){
    Test t1;
    t1.test = 1;
    return 0;
}
```

t1의 크기는? --> 4바이트이다.

멤버 변수의 크기만큼만 힙/스택에 할당된다.

멤버 함수는 일반 함수랑 다를바가 없기에 Code영역에 저장된다.

둘이 같은 이유는 아래 참고.

# python의 self, cpp의 this

둘이 같다.

다만, python에선 명시적으로 self를 멤버 함수의 첫번째 인자로 받는 반면, cpp는 생략되어 있다.

멤버 함수의 첫번째 인자는 this이고, this의 자료형은 다음과 같다.

```cpp
(Class_name)* const this;
```

포인터이므로 사용할때

```cpp
this->(멤버변수명)
(*this).(멤버변수명)
```

이렇게 쓴다.

const 멤버 함수에는 const (class_name)* const this; 가 전달된다.

const로 선언된 객체의 경우 항상 const (class_name)* const this; 로 전달된다.

그래서 const를 쓰면 const가 없는 함수 호출이 안된다.