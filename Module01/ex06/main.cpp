#include "Harl.hpp"


int main (int argc, char **argv)  {

    if (2 != argc) {
        std::cout << "Error" << std::endl\
        << "incorrect  number of arguments. Expected : 2"\
        << std::endl;
        return 1;
    }
    Harl harl;

    harl.complain(argv[1]);

    return 0;
}
