#include <iostream>
#include <string>

int main () {
    std::string stringSTK = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringSTK;
    std::string &stringREF = stringSTK;

    std::cout << stringSTK << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return (0);
}