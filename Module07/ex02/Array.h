//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_ARRAY_H
#define CPP_MODULES_ARRAY_H

#include <iostream>
#include <sstream>
template <class T>
class Array {

private:

    T *arr;
    int length;

public:

    Array() {

        arr = NULL;
        length = 0;
    }


    Array( int value) {

        if (value < 0) {
            throw std::out_of_range( " Cannot create array : Index is out of range" );
        } else if ( value == 0) {
            this->arr = NULL;
            length = 0;
        } else {
            arr = new T[value];
            length = value;
        }
    }


    Array & operator = (const Array &array) {

        std::cout << "operator assignment " <<std::endl;

        if (this != &array) {
            delete []arr;
            this->arr = new T[array.size()];

            for (int i = 0; i < array.size(); i++) {

                this->arr[i] = (  array.arr[i]);
            }

            this->length = array.size();

        }

        return *this;
    }

    Array ( const Array & array ){

        std::cout << "copy ctor " <<std::endl;


        this->arr = new T[array.size()];

        for (int i = 0; i < array.size(); i++) {
            this->arr[i] = array.arr[i];
        }

        this->length = array.size();

    }

    ~Array() {

        delete []arr;
    }

    T *getArr() const {
        return arr;
    }

    int size() const {
        return length;
    };


    T& operator [](int idx) {
        if (idx < 0 || idx > length - 1) {
            std::stringstream ss;

            ss << idx;

            throw std::out_of_range( "Array<X>[" + ss.str() + "] : index is out of range" );
        }
        return arr[idx];
    }

};



#endif //CPP_MODULES_ARRAY_H
