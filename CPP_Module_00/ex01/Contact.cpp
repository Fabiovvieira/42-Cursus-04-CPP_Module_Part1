#include<iostream>
#include <iomanip>
#include "Contact.hpp"
#include <cstdlib>

Contact::Contact(void){
//	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
//	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::getfname() {
	return(this->_fname);
}

std::string Contact::getlname() {
	return(this->_lname);
}

std::string Contact::getnickname() {
	return(this->_nickname);
}

std::string Contact::getphone() {
	return(this->_phone);
}

std::string Contact::getsecret() {
	return(this->_secret);
}

void	Contact::getfullContact() {
	std::cout << "Contact Info:" << std::endl;
	std::cout << "First name: " << this->getfname() <<std::endl;
	std::cout << "Last Name: " << this->getlname() << std::endl;
	std::cout << "Nickname: " << this->getnickname() <<std::endl;
	std::cout << "Phone number: " << this->getphone() << std::endl;
	std::cout << "Darkest Secret: " << this->getsecret() <<std::endl;
}

std::string Contact::_getFromUser(std::string field) {
	std::string contactField;

	do {
		std::cout << field;
		std::getline(std::cin, contactField);
		if (std::cin.eof()) {
			std::cout << "End of input reached." << std::endl;
			std::exit(1);
		}
		else if (std::cin.fail()) {
			std::cout << "Error reading input." << std::endl;
			std::exit(1);
		}
	} while(contactField.empty());
	return (contactField);
}

void	Contact::fillContact() {
	this->_fname = this->_getFromUser("Enter the first name: ");
	this->_lname = this->_getFromUser("Enter the last name: ");
	this->_nickname = this->_getFromUser("Enter the nickname: ");
	this->_phone = this->_getFromUser("Enter the phone number: ");
	this->_secret = this->_getFromUser("Enter your darkest secret: ");
}