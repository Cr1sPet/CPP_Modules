
#include <iostream>
#include <string>
#include "Converter.h"
#include "MyDouble.h"
int main (int argc, char **argv) {

    if (2 != argc) {
        std::cout << "Incorrect arguments nmb, required : 2" << std::endl;
        return 1;
    }

    std::string input = std::string(argv[1]);

    Converter converter(input);
    converter.print();
    return 0;
}

