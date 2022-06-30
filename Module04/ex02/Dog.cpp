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
        this->brain = dog.brain;
    }

    std::cout << "Assignment operator Dog" << std::endl;

    return *this;
}

Dog::Dog ( const Dog & dog ) {

    std::cout << "Copy constructor Dog" << std::endl;
    this->brain = new Brain(*(dog.brain));
    this->type = dog.type;

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
