#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

PhoneBook::PhoneBook() {
	i = 0;
	ok = false;
}

void PhoneBook::printFormatted(std::string output) {
	if (output.length() > 10) {
		std::cout << output.substr(0, 9) << ".";
	} else {
		std::cout << std::setw(10) << output;
	}
}

bool PhoneBook::printContacts() {
	int length;
	if (ok) {
		length = 8;
	} else {
		length = i;
	}
	std::cout << std::endl;
	if (0 == length) {
		std::cout << "database is empty!" << std::endl;
		return false;
	}
	std::cout << "|" << std::setw(10) << "index" <<
	"|" << std::setw(10) << "first name"
	<< "|" << std::setw(10) << "last name"
	<< "|" << std::setw(10) << "nickname" << "|" << std::endl;
	for (int j = 0; j < length; j++) {
		std::cout << "|";
		std::cout << std::setw(10) << j << "|";
		printFormatted(contacts[j].getFirstName());
		std::cout << "|";
		printFormatted(contacts[j].getLastName());
		std::cout << "|";
		printFormatted(contacts[j].getNickName());
		std::cout << "|";
		std::cout << std::endl << std::endl;
	}
	return true;
}

void PhoneBook::addContact(Contact contact) {
	contacts[i] = contact;
	if (!ok && 7 == i) {
		ok = true;
	}
	i = (++i % 8);
}

void PhoneBook::searchContact(int ind) {
	
	if (ind < 0 || ind > i) {
		std::cout << "incorrect index" << std::endl;
	} else {
		contacts[ind].printAllFields();
	}
}