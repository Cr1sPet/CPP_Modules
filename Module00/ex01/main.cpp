#include "PhoneBook.hpp"
#include <iomanip>

Contact readContact() {
	Contact contact;
	std::string input;

	std::cout << "enter first name : \n";
	std::cin >> input;
	contact.setFirstName(input);
	std::cout << "enter last name : \n";
	std::cin >> input;
	contact.setLastName(input);
	std::cout << "enter nickname : \n";
	std::cin >> input;
	contact.setNickName(input);
	std::cout << "enter phone number : \n";
	std::cin >> input;
	contact.setPhoneNumber(input);
	std::cout << "enter darkest secret : \n";
	std::cin >> input;
	contact.setDarkestSecret(input);
	return (contact);
}

int readInt() {
	int a;
	if (!(std::cin >> a)) {
		std::cout << "incorrect input" << std::endl;
		return(1);
	}
	return (a);
}

int main(void) {
	PhoneBook	pb;
	Contact		contact;
	std::string input;

	while(true) {
		std::cout << "enter command <ADD> / <SEARCH> / <EXIT> : \n";
		std::cin >> input;
		if (0 == input.compare("ADD")) {
			pb.addContact(readContact());
			std::cout << "entered contact successfully added!" << std::endl;
		} else if (0 == input.compare("EXIT")) {
			std::cout << "exit" << std::endl;
			return (1);
		} else if (0 == input.compare("SEARCH")) {

			if (pb.printContacts()) {
				std::cout << "enter index of fild to get info:\n";
				pb.searchContact(readInt());
			}
		} else {
			std::cout << "unrecognized input, try again!\n";
		}
	}
	return (0);
}