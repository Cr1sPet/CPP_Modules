#include "Cat.hpp"

/*
 *  Canonical form
 */

Cat::Cat() {
    std::cout << "Cat constructor" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat & Cat::operator = (const Cat &cat) {

    if (this != &cat) {
        this->type = cat.type;
    }

    std::cout << "Assignment operator Cat" << std::endl;

    return *this;
}

Cat::Cat ( const Cat & cat ) {

    *this = cat;
    std::cout << "Copy constructor Cat" << std::endl;

}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}