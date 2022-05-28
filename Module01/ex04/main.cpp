#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>


std::string readFile(char *filePath) {
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cout << "Error\nfile didnt open1" << std::endl;
        exit(1);
    }
    std::stringstream sstr;
    while (file >> sstr.rdbuf());
    std::string input = sstr.str();
    file.close();
    return input;
}

void process(std::string outFilePath, std::string input, char *_from, char *to) {
    std::ofstream file;
    file.open (outFilePath.c_str());
    if (!file.is_open()) {
        std::cout << "Error\nfile didnt open" << std::endl;
        exit(1);
    }
    size_t index = input.find(_from);

    std::string from(_from);


    while (true) {
        index = input.find(from);
        if (index != std::string::npos) {
            input.erase(index, from.length());
            input.insert(index, to);
            file << input.substr(0, index + from.length());
            input = input.substr(index + from.length());
        } else {
            std::cout << "finish\n";
            if (input.length()) {
                file << input;
            }
            break;
        }
    }
     file.close();
}


int main(int argc, char **argv) {
    if (4 != argc) {
        std::cout << "Error\nInvalid number of arguments." << std::endl;
        return 1;
    }
    std::string input;
    input = readFile(argv[1]);

    std::string outFilePath(argv[1]);
    outFilePath += ".replace";
    process(outFilePath, input, argv[2], argv[3]);
    return 0;
}