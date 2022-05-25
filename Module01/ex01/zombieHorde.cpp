#include "Zombie.hpp"

#include <sstream>
#include <string>
#include <iostream>

Zombie* zombieHorde( int N, std::string name) {
    std::stringstream ss;

    Zombie* zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        ss << i;
        std::string myString = ss.str();
        zombies[i].setName(name + myString);
        ss.str("");
    }
    return zombies;
}