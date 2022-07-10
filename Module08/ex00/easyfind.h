//
// Created by Josue Chopped on 7/10/22.
//

#ifndef CPP_MODULES_EASYFIND_H
#define CPP_MODULES_EASYFIND_H

#include <vector>
#include <iterator>

template <typename T>
typename T::iterator easyfind( T parameter, int val) {

    (void )parameter;
    (void )val;

    typename T::iterator iter = std::find(parameter.begin(), parameter.end(), val);

    if (iter != parameter.end()) {
        return iter;
    }
    else {

        throw std::invalid_argument("Exception : Number not found");

    }

}

#endif //CPP_MODULES_EASYFIND_H
