#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main (void) {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();


    j = i;


    WrongAnimal* k = new WrongCat();
    WrongAnimal* wrongAnimal = new WrongAnimal();
    WrongCat *wrongCat = new WrongCat();

    std::cout << "===================" << std::endl;

    std::cout << k->getType() << std::endl;

    k->makeSound();
    wrongAnimal->makeSound();

    wrongCat->makeSound();


    delete meta;
    delete j;
    delete i;

    delete wrongCat;
    delete k;
    delete wrongAnimal;
    return 0;
}