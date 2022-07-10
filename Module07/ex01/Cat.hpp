#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat {

private:

    int height;
    std::string name;

public:
    Cat();
    Cat & operator = ( const Cat & );
    Cat ( const Cat & );
    ~Cat();

    Cat ( std::string name, int height);

    int getHeight() const;
    void setHeight(const int height);
    std::string getName() const;
    void setName(const std::string name);

    bool  operator > ( const Cat & ) const;
    bool  operator < ( const Cat & ) const;
    bool  operator >= ( const Cat & ) const;
    bool  operator <= ( const Cat & ) const;
    bool  operator == ( const Cat & ) const;
};

std::ostream & operator << ( std::ostream& , const Cat& );


#endif
