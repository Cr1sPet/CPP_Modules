//
// Created by Josue Chopped on 6/30/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor" << std::endl;
}

Brain & Brain::operator = (const Brain &brain) {

    if (this != &brain) {
        for(int i = 0; i < (int) brain.ideas->length(); i++) {
            this->ideas[i] = brain.ideas[i];
        }
    }

    std::cout << "Assignment operator Brain" << std::endl;

    return *this;
}

Brain::Brain ( const Brain & brain ) {

    *this = brain;
    std::cout << "Copy constructor Brain" << std::endl;

}

Brain::~Brain() {
    std::cout << "Brain destructor" << std::endl;
}