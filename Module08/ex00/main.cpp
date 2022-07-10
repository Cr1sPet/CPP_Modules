//
// Created by Josue Chopped on 7/10/22.
//

#include <vector>
#include <set>
#include "iostream"
#include "easyfind.h"

typedef std::vector<int> VI;
typedef std::set<int> SI;

typedef VI::iterator VII;
typedef SI::iterator SII;


int main () {

    VI v;
    SI s;

    VII int_vect_itr;
    SII int_set_itr;


    for(int i = 1; i <= 10; i++) {
        v.push_back(i * i);
    }

    for (int i = 1; i <= 10; i++) {
        s.insert(i * i);
    }

    try {
        int_vect_itr = easyfind(v, 4);
        std::cout << *int_vect_itr << " found successfully" << std::endl;
        int_set_itr = easyfind(s, 130);
        std::cout << *int_vect_itr << " found successfully" << std::endl;
    } catch ( std::invalid_argument &e ) {
        std::cout << e.what() << std::endl;
    }

    try {
        int_set_itr = easyfind(s, 81);
        std::cout << *int_set_itr << " found successfully" << std::endl;
        int_set_itr = easyfind(s, 13);
        std::cout << *int_set_itr << " found successfully" << std::endl;
    } catch ( std::invalid_argument &e ) {
        std::cout << e.what() << std::endl;
    }




    return 0;
}
