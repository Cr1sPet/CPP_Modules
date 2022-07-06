#include "Dog.hpp"

/*
 *  Canonical form
 */


Dog::Dog() {
    std::cout << "Dog constructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog & Dog::operator = (const Dog &dog) {

    if (this != &dog) {
        this->type = dog.type;
        delete brain;
        this->brain = new Brain( *dog.brain);
    }

    std::cout << "Assignment operator Dog" << std::endl;

    return *this;
}

Dog::Dog ( const Dog & dog ) : Animal() {

    *this = dog;
    std::cout << "Copy constructor Dog" << std::endl;

}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog destructor" << std::endl;
}

/*
 * Methods
 */

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
