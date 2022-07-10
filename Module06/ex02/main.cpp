//
// Created by serj on 09.07.22.
//

#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

#include <time.h>
#include <stdlib.h>
#include <iostream>

Base *generate( void ) {
    int result = rand() % 3;
    std::cout << "[generate] ";
    switch (result) {
        case 0:
            std::cout << "created pointer A*" << std::endl;
            return new A();
        case 1:
            std::cout << "created pointer B*" << std::endl;
            return new B();
        case 2:
            std::cout << "created pointer C*" << std::endl;
            return new C();
    }
    return NULL;
}

void identify (Base *p) {
    std::cout << "[identify by pointer] ";
    if ( dynamic_cast<A*>(p) ) {
        std::cout << "type of pointer is A*" << std::endl;
    }

    if ( dynamic_cast<B*>(p) ) {
        std::cout << "type of pointer is B*" << std::endl;
    }

    if ( dynamic_cast<C*>(p) ) {
        std::cout << "type of pointer is C*" << std::endl;
    }
}

void identify (Base &p) {
    std::cout << "[identify by reference] ";


    try {
        A & a = dynamic_cast<A &> (p);
        (void) a;
        std::cout << "type of reference is A&" << std::endl;
    } catch (const  std::exception& e) {


    }

    try {
        B & b = dynamic_cast<B &> (p);
        (void) b;
        std::cout << "type of reference is B&" << std::endl;
    } catch (const  std::exception& e) {


    }

    try {
        C & c = dynamic_cast<C &> (p);
        (void) c;
        std::cout << "type of reference is C&" << std::endl;
    } catch (const  std::exception& e) {

    }
}

int main() {

    srand(time(NULL));
    Base **bases = new Base*[5];
    for (int i = 0; i < 5; i++) {
        bases[i] = generate();
        identify(bases[i]);
        identify(*bases[i]);
        std::cout << std::endl;
    }

    for (int i = 0; i < 5; i++) {
        delete bases[i];
    }

    delete[] bases;

    return 0;
}
