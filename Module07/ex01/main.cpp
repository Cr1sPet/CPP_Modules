//
// Created by serj on 09.07.22.
//

#include "Iter.h"
#include "Cat.hpp"
#include "Zombie.hpp"

int main () {

    int size = 10;

    Zombie *zombies = createArray<Zombie>(size, "infected");
    Cat *cats = createArray<Cat>(size , "Boris");

    iter(zombies, size, &printName);

    std::cout << "####################" << std::endl;

    iter(cats, size, &printName);

    std::cout << "####################" << std::endl;


    int intArray[5] = {103, -24, 566, 34, 65};
    iter(intArray, 3, &print);
    std::cout << "####################" << std::endl;

    iter(cats, size, &print);

    delete []zombies;
    delete []cats;

}