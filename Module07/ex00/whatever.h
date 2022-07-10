//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_WHATEVER_H
#define CPP_MODULES_WHATEVER_H

template <typename T>
void swap(T &parameter1, T &parameter2) {
    T temp = parameter1;
    parameter1 = parameter2;
    parameter2 = temp;
}

template <typename T>
T min( const T &parameter1, const T &parameter2) {
    if (parameter1 < parameter2) {
        return parameter1;
    } else {
        return parameter2;
    }
}

template <typename T>
T max( const T &parameter1, const T &parameter2) {
    if (parameter1 > parameter2) {
        return parameter1;
    } else {
        return parameter2;
    }
}

#endif //CPP_MODULES_WHATEVER_H
