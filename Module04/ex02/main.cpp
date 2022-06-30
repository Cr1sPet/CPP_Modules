#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void) {

    const int size = 10;

    Animal** animals = new Animal*[size];

    int i = 0;
    for (; i < size / 2; i++) {
        animals[i] = new Cat();
    }

    for (; i < size; i++) {
        animals[i] = new Dog();
    }

    for (int j = 0; j < size; j++) {
        delete animals[j];
    }
    delete []animals;

    return 0;
}