//
// Created by Josue Chopped on 7/7/22.
//

#include "MyCustomException.h"

int main() {
    try {
        char * str = "Custom C++ Exception";
        throw MyCustomException(str);
    } catch (MyCustomException mce) {
        cout << "Caught MyCustomException" << endl;
        cout << mce.what();
    }
}