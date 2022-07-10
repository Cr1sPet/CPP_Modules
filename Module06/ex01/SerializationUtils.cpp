//
// Created by serj on 09.07.22.
//

#include "SerializationUtils.h"

SerializationUtils::SerializationUtils() {

}

SerializationUtils & SerializationUtils::operator = (const SerializationUtils &serializationUtils) {

    if (this != &serializationUtils) {

    }

    return *this;
}

SerializationUtils::SerializationUtils(const SerializationUtils &) {

}

SerializationUtils::~SerializationUtils() {

}


uintptr_t SerializationUtils::serialize(Data *ptr) {
    uintptr_t ret = reinterpret_cast<uintptr_t> (ptr);
    return ret;
}
Data* SerializationUtils::deserialize(uintptr_t raw) {
    Data * ret = reinterpret_cast<Data *> (raw);
    return ret;
}