//
// Created by Josue Chopped on 7/10/22.
//

#include "Span.h"


/*
 * Canonical form
 */

Span::Span() {
    this->n = 0;
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

unsigned int Span::shortestSpan() {

    if (v.size() < 2) {
        throw std::length_error("Exception : Span is too small!");
    }

    return 100;

}
unsigned int Span::longestSpan() {

    if (v.size() < 2) {
        throw std::length_error("Exception : Span is too small!");
    }

    return 110;

}