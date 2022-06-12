#include "Zombie.hpp"
#include <sstream>
#include <iostream>

Zombie* zombieHorde( int N, std::string name) {
    std::stringstream ss;

    if (N < 0) {
        std::cout << "N can not be negative" << std::endl;
        exit(1);
    }

    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; i++) {
        ss << i;
        zombies[i].setName(name + ss.str());
        ss.str("");
    }
    return zombies;
}