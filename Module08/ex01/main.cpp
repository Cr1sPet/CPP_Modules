//
// Created by Josue Chopped on 7/10/22.
//

#include <vector>
#include <set>
#include "iostream"
#include "Span.h"

typedef std::vector<int> VI;
typedef std::set<int> SI;

typedef VI::iterator VII;
typedef SI::iterator SII;


int main () {

    Span span(10);

    try {
//        span.addNumber(5);
//        span.addNumber(245);
//        span.addNumber(524);
//        span.addNumber(5024);
//        span.addNumber(4);
//        span.print();
//        span.addNumbersRange(1000, 1000000, 5);
//        span.print();
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;




    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << span.longestSpan() << std::endl;
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << span.shortestSpan() << std::endl;
    } catch ( std::exception &e ) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
