//
// Created by serj on 09.07.22.
//

#include "whatever.h"
#include <iostream>
#include <string>
#include "Cat.hpp"

int main() {

    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Swap nums" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "Swap strings" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    Cat firstCat("Boris", 100);
    Cat secondCat("Felix", 200);

    std::cout << "###################" << std::endl;

    std::cout << "First cat : " << firstCat;
    std::cout << "Second cat : " << secondCat;

    std::cout << "Swap cats" << std::endl;

    swap(firstCat, secondCat);

    std::cout << "First cat : " << firstCat;
    std::cout << "Second cat : " << secondCat;

    std::cout << "The highest Cat is : " << max<Cat>(firstCat, secondCat);
    std::cout << "The lowest Cat is : " << min<Cat>(firstCat, secondCat);

    std::cout << std::endl;


    return 0;
}