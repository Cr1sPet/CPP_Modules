#include "Zombie.hpp"

int main() {

    Zombie *zombie = newZombie("Bob");
    zombie->announce();

    randomChump("Karl");

    delete(zombie);
    return (0);
}