#include "WrongCat.hpp"

/*
 *  Canonical form
 */

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat & WrongCat::operator = (const WrongCat &cat) {

    if (this != &cat) {
        this->type = cat.type;
    }

    std::cout << "Assignment operator WrongCat" << std::endl;

    return *this;
}

WrongCat::WrongCat ( const WrongCat & cat ) {

    *this = cat;
    std::cout << "Copy constructor WrongCat" << std::endl;

}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat make Woof!" << std::endl;
}