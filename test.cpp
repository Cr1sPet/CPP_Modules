#include <iostream>
#include <string>

class Car {

public:
    void  drive() {
        std::cout << "I'm coming" << std::endl;
    }
};

class Airplane {

public:
    void fly() {
        std::cout << "I'm flying" << std::endl;
    }
};

class FlyingCar : public Car, public Airplane {
//public:

};

int main () {


    FlyingCar fc;
    fc.fly();
    fc.drive();
    return 0;
}