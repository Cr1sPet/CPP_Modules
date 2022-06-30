#include "Animal.hpp"


/*
 *  Canonical form
 */

Animal::Animal() {
    std::cout << "Animal constructor" << std::endl;
    this->type = "";
}

Animal & Animal::operator = (const Animal &animal) {

    if (this != &animal) {
        this->type = animal.type;
    }

    std::cout << "Assignment operator Animal" << std::endl;

    return *this;
}

Animal::Animal ( const Animal & animal ) {

    *this = animal;
    std::cout << "Copy constructor Animal" << std::endl;

}

Animal::~Animal() {
    std::cout << "Animal destructor" << std::endl;
}

/*
 * Methods
 */

void Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}


