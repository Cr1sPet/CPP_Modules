//
// Created by serj on 09.07.22.
//

#include "Array.h"
#include "Array.tpp"
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
        Array<int> array(5);
        Array<int> array1(10);

        for (int i = 0; i < 5; i++) {
            array[i] = i + 10;
        }

        printArray(array, 5);

        for (int i = 0; i < 10; i++) {
            array1[i] = i + 1000;
        }

        printArray(array1, 10);

        array = array1;

        printArray(array, 10);

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