//
// Created by Josue Chopped on 7/10/22.
//

#ifndef CPP_MODULES_SPAN_H
#define CPP_MODULES_SPAN_H

#include <vector>
#include <iterator>
#include <exception>
#include <algorithm>
#include <iostream>
#include <time.h>
#include <stdlib.h>

typedef std::vector<int> VI;
typedef VI::iterator VII;


class Span {

private:

    unsigned int n;
    VI v;
    VI generateRandomVector(unsigned int from, unsigned int to, unsigned count);

public:

    Span();
    Span & operator = ( const Span & );
    Span ( const Span & );
    ~Span();

    Span(unsigned int n);
    unsigned int getN() const ;
    void addNumber(unsigned int number);
    void addNumbersRange(unsigned int from, unsigned int to, int count);

    unsigned int shortestSpan();
    unsigned int longestSpan();

    void print();

};


#endif //CPP_MODULES_SPAN_H
