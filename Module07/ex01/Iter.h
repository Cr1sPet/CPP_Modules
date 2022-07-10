//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_ITER_H
#define CPP_MODULES_ITER_H

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <exception>



template <typename T>
void printName (T param ) {
    std::cout << param.getName() << std::endl;
}

template <typename T>
void print (T param ) {
    std::cout << param << std::endl;
}


template <typename T>
T* createArray( const int &N, std::string name) {
    std::stringstream ss;

    if (N <= 0) {
        throw std::out_of_range("bad size");
    }

    T* array = new T[N];

    for (int i = 0; i < N; i++) {
        ss << i;
        array[i].setName(name + ss.str());
        ss.str("");
    }
    return array;
}


template <typename T>
void iter(T *array, int arrayLength, void (*parameter3) (T) ) {

    for (int i = 0; i < arrayLength; i++) {
        parameter3(array[i]);
    }

}


#endif //CPP_MODULES_ITER_H
