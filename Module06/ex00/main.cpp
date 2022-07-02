
#include <iostream>
#include <string>

int main (int argc, char **argv) {

    if (2 != argc)
        std::cout << "Incorrect arguments nmb, required : 2" << std::endl;

    std::string input(argv[1]);

    std::cout << input << std::endl;

    return 0;
}

