#include "Zombie.hpp"
#include "Functions.hpp"

int main() {

    Zombie *zombie = newZombie("Bob");
    zombie->announce();

    randomChump("Karl");

    delete(zombie);
    return 0;
}