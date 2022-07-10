//
// Created by serj on 09.07.22.
//

#include "Array.h"
#include <iostream>
#include "Cat.hpp"

template <typename T>
void printArray( T array, int length ) {
    std::cout << "#############################" << std::endl;
    for ( int i = 0; i < length; i++) {
        std::cout << "Arr[" << i << "] : " << array[i] << std::endl;
    }
}


int main () {

    try {
        Array<std::string> array(0);
        std::cout << "Array size : " << array.size() << std::endl;

        Array<std::string> array1(-10);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {

        Array<int> array(10);
        array[10] = 3;

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }


    try {
        Array<int> array(5);

        for (int i = 0; i < 5; i++) {
            array[i] = i + 10;
        }

        printArray(array, 5);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Array<Cat> catArray(5);
        printArray(catArray, 5);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }



    return 0;
}
