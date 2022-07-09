//
// Created by serj on 09.07.22.
//

#ifndef CPP_MODULES_SERIALIZATIONUTILS_H
#define CPP_MODULES_SERIALIZATIONUTILS_H

#include "Data.h"
#include <stdint.h>

class SerializationUtils {

public:

    SerializationUtils();
    SerializationUtils & operator = ( const SerializationUtils & );
    SerializationUtils ( const SerializationUtils & );
    ~SerializationUtils();

    static uintptr_t serialize( Data * ptr ) {
        uintptr_t ret = reinterpret_cast<uintptr_t> (ptr);
        return ret;
    }

    static Data* deserialize(uintptr_t raw) {
        Data * ret = reinterpret_cast<Data *> (raw);
        return ret;
    }

};


#endif //CPP_MODULES_SERIALIZATIONUTILS_H
