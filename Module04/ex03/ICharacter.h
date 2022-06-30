//
// Created by Josue Chopped on 6/30/22.
//

#ifndef ICHARACTER_H
#define ICHARACTER_H


class ICharacter {

public:
    virtual ~ICharacter();
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;

};


#endif //CPP_MODULES_ICHARACTER_H
