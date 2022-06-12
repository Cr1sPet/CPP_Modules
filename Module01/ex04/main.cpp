#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
 #include <sys/types.h>
 #include <sys/stat.h>
 #include <fcntl.h>


bool is_empty(std::ifstream& pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

std::string readFile(char *filePath) {
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cout << "Error\nfile didnt open!" << std::endl;
        exit(1);
    }
    if (is_empty(file)) {
        std::cout << "File is empty" << std::endl;
        file.close();
        exit(0);
    }
    std::string ret;
    std::string input;
    while (file) {
        std::getline(file, input);
        ret += input;
    }
    return ret;
}

void process(std::string outFilePath, std::string input, char *_from, char *to) {
    bool ok = 0;
    std::string from(_from);
    std::ofstream file;
    file.open (outFilePath.c_str());
    if (!file.is_open()) {
        std::cout << "Error\nfile didnt open" << std::endl;
        exit(1);
    }
    size_t index;

    while (true) {
        index = input.find(from);
        if (index != std::string::npos) {
            ok = 1;
            input.erase(index, from.length());
            input.insert(index, to);
            file << input.substr(0, index + from.length());
            input = input.substr(index + from.length());
        } else {
            if (0 == ok) {
                std::cout << "file is empty";
            }
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