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
        ret += input + '\n';
    }
    return ret;
}

void process(std::string outFilePath, std::string input, std::string from, std::string to) {
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
            input.erase(index, from.length());
            input.insert(index, to);
            file << input.substr(0, index + from.length());
            input = input.substr(index + from.length());
        } else {
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
    std::string input_text = readFile(argv[1]);
    std::string from = argv[2];
    std::string to = argv[3];
    std::string outFilePath = (std::string)argv[1] + ".replace";
    process(outFilePath, input_text, from, to);
    return 0;
}