#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iomanip>
#include <iostream>

class PhoneBook {

	private:
	
	bool	ok;
	int		i;
	void printFormatted(std::string);
	Contact contacts[8];

	public:
	PhoneBook();
	void addContact(Contact);
	bool printContacts();
	void searchContact(int);
};

#endif