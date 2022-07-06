#include "Dog.hpp"

/*
 *  Canonical form
 */


Dog::Dog() {
    std::cout << "Dog constructor" << std::endl;
    this->type = "Dog";
}

Dog & Dog::operator = (const Dog &dog){

    if (this != &dog) {
        this->type = dog.type;
    }

    std::cout << "Assignment operator Dog" << std::endl;

    return *this;
}

Dog::Dog ( const Dog & dog ) : Animal() {

    *this = dog;
    std::cout << "Copy constructor Dog" << std::endl;

}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;
}

/*
 * Methods
 */

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
