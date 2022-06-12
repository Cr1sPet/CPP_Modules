
#include "iostream"

class A {
    public:
    A() {
        std::cout << "A CONSTRUCTOR" << std::endl;
    }
};

class B : public A {
    public:
    B() {
        std::cout << "B CONSTRUCTOR" << std::endl;
    }
};

int main () {

    B a;
    return 0;
}