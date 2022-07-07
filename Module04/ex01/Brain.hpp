#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <sstream>

class Brain {

private:

    std::string ideas [100];
    void setIdeas();

public:

    Brain();
    Brain & operator = ( const Brain & );
    Brain ( const Brain & );
    ~Brain();

    std::string generateIdea();

};

#endif