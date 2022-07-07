//
// Created by Josue Chopped on 6/30/22.
//

#include "Brain.hpp"

Brain::Brain() {
    std::srand(std::time(NULL));
    setIdeas();
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

/*
 * Logic
 */


void Brain::setIdeas() {
    std::stringstream ss;

    for (int i = 0; i < 100; i++) {
        ss << std::rand() % 777;
        ideas[i] = "idea" + ss.str();
        ss.str("");
    }
}

std::string Brain::generateIdea() {

    return this->ideas[std::rand() % 100];

}