//
// Created by serj on 09.07.22.
//

#include "Data.h"
#include "SerializationUtils.h"

#include <iostream>


int main() {

    Data before;

    before.a = 234;
    before.b = "hello";

    std::cout << "before.a : " << before.a << ", before.b : " << before.b << std::endl;

    uintptr_t storage = SerializationUtils::serialize(&before);
    Data *after = SerializationUtils::deserialize(storage);

    std::cout << "####" << std::endl;

    std::cout << "after->a : " << after->a << ", after->b : " << after->b << std::endl;


    return 0;
}