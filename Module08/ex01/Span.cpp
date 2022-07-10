//
// Created by Josue Chopped on 7/10/22.
//

#include "Span.h"


/*
 * Canonical form
 */

Span::Span() {
    this->n = 0;
    srand(time(NULL));
}

Span & Span::operator = (const Span &span) {

    if (this != &span) {
        this->n = span.getN();
        this->v = span.v;
    }

    return *this;
}

Span::Span ( const Span & span ) {

    *this = span;

}

Span::~Span() {

}

/*
 * Constructor
 */

Span::Span( unsigned int n ) : n(n) {

    srand(time(NULL));
    this->n = n;

}

/*
 * Getter
 */

unsigned int Span::getN() const {
    return this->n;
}

/*
 * Logic
 */

void Span::addNumber(unsigned int number) {
    if (n != v.size()) {
        v.push_back(number);
    } else {
        throw std::length_error("Exception : Span is already full!");
    }
}

VI Span::generateRandomVector(unsigned int from, unsigned int to, unsigned count) {
    VI ret;
    for (int i = 0; i < (int) count; i++) {
        ret.push_back(from + ( std::rand() % ( to - from + 1 ) ));
    }
    return ret;
}


void Span::addNumbersRange(unsigned int from, unsigned int to, int count)
{
    if ((int) ((n - v.size()) - count) >= 0 ) {
        VI generatedVector = generateRandomVector(from, to, count);
        this->v.insert(v.end(), generatedVector.begin(), generatedVector.end());
    } else {
        throw std::length_error("Exception : Too many elements to add!");
    }
}

unsigned int Span::shortestSpan() {

    if (v.size() < 2) {
        throw std::length_error("Exception : Span is too small!");
    }

    sort(v.begin(), v.end());

    VII temp = v.begin();
    VII i = temp + 1;
    int min = *i - *temp;
    do {
        if (*i - *temp < min) {
            min = *i - *temp;
        }
        i++;
        temp++;
    } while (i != v.end());

    return min;

}
unsigned int Span::longestSpan() {

    if (v.size() < 2) {
        throw std::length_error("Exception : Span is too small!");
    }
    int min = *std::min_element(v.begin(), v.end());
    int max = *std::max_element(v.begin(), v.end());


    return max - min;

}

void Span::print() {
    std::cout << "######" << std::endl;
    for (VII i = v.begin(); i != v.end(); ++i) {
        std::cout << *i << std::endl;
    }
    std::cout << "######" << std::endl;
}