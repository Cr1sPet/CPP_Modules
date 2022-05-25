#include "Zombie.hpp"

#include <string>
#include <iostream>

Zombie* zombieHorde( int N, std::string name) {
    Zombie* zombies;
    Zombie zombie;
    std::string nm;
    zombies = new Zombie[N];
    for (int i = 0; i < N; i++) {
        Zombie zombie;
        nm = name.append("s");
        zombie.setName(nm);
        zombies[i] = zombie;
    }
    return zombies;
}