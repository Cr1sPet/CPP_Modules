//
// Created by serj on 09.07.22.
//

#include "whatever.h"
#include <iostream>
#include <string>
#include "Cat.hpp"

int main() {

    int a = 10;
    int b = 30;

    Cat firstCat("Boris", 100);
    Cat secondCat("Felix", 200);

    std::cout << "First cat : " << firstCat;
    std::cout << "Second cat : " << secondCat;

    std::cout << "Swap cats" << std::endl;

    swap(firstCat, secondCat);

    std::cout << "First cat : " << firstCat;
    std::cout << "Second cat : " << secondCat;

    std::cout << "The highest Cat is : " << max<Cat>(firstCat, secondCat);
    std::cout << "The lowest Cat is : " << min<Cat>(firstCat, secondCat);

    std::cout << std::endl;


    std:: cout << "number a : " << a << ", " << "number b : " << b << std::endl;

    std::cout << "Swap numbers" << std::endl;
    swap(a, b);
    std:: cout << "number a : " << a << ", " << "number b : " << b << std::endl;



    std::cout << "Min number is : " << min<int>(a, b) << std::endl;
    std::cout << "Max number is : " << max<int>(a, b) << std::endl;



    std::cout << std::endl;


    return 0;
}