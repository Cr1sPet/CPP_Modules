#include "Contact.hpp"


std::string Contact::getPhoneNumber() {
	return phoneNumber;
}

std::string Contact::getFirstName() {
	return firstName;
}

std::string Contact::getLastName() {
	return lastName;
}

std::string Contact::getNickName() {
	return nickName;
}

std::string Contact::getDarkestSecret() {
	return darkestSecret;
}



void Contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}


void Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
}


void Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
}


void Contact::setDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

void Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::printAllFields() {
	std::cout << "first name : " << getFirstName() << std::endl;
	std::cout << "last name : "<< getLastName() << std::endl;
	std::cout << "nick name : "<< getNickName() << std::endl;
	std::cout << "phone number : "<< getPhoneNumber() << std::endl;
	std::cout << "darkest secret : "<< getDarkestSecret() << std::endl;
}