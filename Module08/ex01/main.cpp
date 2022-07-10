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

    Span span(2);

    try {
        span.addNumber(24);
        span.addNumber(-123);
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
