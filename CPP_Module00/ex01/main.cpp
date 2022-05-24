#include "PhoneBook.hpp"
#include <iomanip>

int main(void) {
	PhoneBook	pb;
	Contact		contact;

	contact.setFirstName("Andrey23s");
	contact.setLastName("Kirillov");
	contact.setDarkestSecret("By");
	contact.setNickName("Pol");
	contact.setPhoneNumber("Mir");
	pb.addContact(contact);
	contact.setFirstName("Ser456789hj");
	contact.setLastName("Pov");
	contact.setDarkestSecret("MAC");
	contact.setNickName("Kill");
	contact.setPhoneNumber("888");
	pb.addContact(contact);
	pb.printContacts();

	return (0);
}