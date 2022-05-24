#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

void PhoneBook::print() {
	std::cout << "hello from PhoneBook realization\n";
}

void PhoneBook::printFormatted(std::string output) {
	if (output.length() > 10) {
		std::cout << output.substr(0, 9) << ".";
	} else {
		std::cout << std::setw(10) << output;
	}
}

void PhoneBook::printContacts() {
	int length;
	if (ok) {
		length = 8;
	} else {
		length = i;
	}
	for (int j = 0; j < length; j++) {
		printFormatted();
		printFormatted(contacts[j].getFirstName());
		std::cout << "|";
		printFormatted(contacts[j].getLastName());
		std::cout << "|";
		printFormatted(contacts[j].getNickName());
		std::cout << std::endl;
	}
}

void PhoneBook::addContact(Contact contact) {
	contacts[i] = contact;
	if (!ok && 7 == i) {
		ok = true;
	}
	i = (++i % 8);
}
