#include "Cat.hpp"

/*
 *  Canonical form
 */

Cat::Cat() {
    this->height = 10;
    this->name = "defaultCat";
}

Cat & Cat::operator = (const Cat &cat) {

    if (this != &cat) {
        this->name = cat.getName();
        this->height = cat.getHeight();
    }

    return *this;
}

Cat::Cat ( const Cat & cat ) {

    *this = cat;
//    std::cout << "Copy constructor Cat" << std::endl;

}

Cat::~Cat() {
//    std::cout << "Cat destructor" << std::endl;
}

/*
 * Ctor
 */

Cat::Cat( std::string name, int height ) {
    this->name = name;
    this->height = height;
}

/*
 * Getters
 */

int Cat::getHeight() const{
    return height;
}

std::string Cat::getName() const{
    return name;
}

/*
 * Setters
 */

void Cat::setHeight(const int height) {
    this->height = height;
}

void Cat::setName(const std::string name) {
    this->name = name;
}


/*
 * Comparison overloading
 */


bool Cat::operator > ( const Cat &cat ) const{
    return height > cat.height;
}

bool Cat::operator < ( const Cat &cat ) const{
    return (height < cat.height);
}

bool Cat::operator >= ( Cat const &cat ) const {
    return height >= cat.height;
}


bool Cat::operator <= ( Cat const &cat ) const {
    return height <= cat.height;
}


std::ostream &operator << ( std::ostream &out, Cat const &cat ) {
    out << "Cat " << cat.getName() << ", height " << cat.getHeight();
    return out;
}

