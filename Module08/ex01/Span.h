//
// Created by Josue Chopped on 7/10/22.
//

#ifndef CPP_MODULES_SPAN_H
#define CPP_MODULES_SPAN_H

#include <vector>
#include <iterator>
#include <exception>

typedef std::vector<int> VI;


class Span {

private:

    unsigned int n;
    VI v;


public:

    Span();
    Span & operator = ( const Span & );
    Span ( const Span & );
    ~Span();

    Span(unsigned int n);
    unsigned int getN() const ;
    void addNumber(unsigned int number);

    unsigned int shortestSpan();
    unsigned int longestSpan();


};


#endif //CPP_MODULES_SPAN_H
