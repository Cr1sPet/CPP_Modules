//
// Created by serj on 11.07.22.
//

#include "MutantStack.h"
#include <iostream>

int main () {

    MutantStack<int> ms;

    ms.push(100);
    ms.push(23);

    std::cout << ms.size() << std::endl;

    return 0;
}