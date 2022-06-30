#include "WrongAnimal.hpp"


/*
 *  Canonical form
 */

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor" << std::endl;
    this->type = "";
}

WrongAnimal & WrongAnimal::operator = (const WrongAnimal &animal) {

    if (this != &animal) {
        this->type = animal.type;
    }

    std::cout << "Assignment operator WrongAnimal" << std::endl;

    return *this;
}

WrongAnimal::WrongAnimal ( const WrongAnimal & animal ) {

    *this = animal;
    std::cout << "Copy constructor WrongAnimal" << std::endl;

}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor" << std::endl;
}

/*
 * Methods
 */

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string const WrongAnimal::getType() const{
    return type;
}


