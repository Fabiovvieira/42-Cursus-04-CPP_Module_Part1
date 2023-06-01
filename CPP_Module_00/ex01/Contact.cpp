#include<iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(void){
	std::cout << "Contact Constructor called" << std::endl;
	return ;
}

Contact::~Contact(void){
	std::cout << "Contact Destructor called" << std::endl;
	return ;
}

std::string Contact::_getFromUser(std::string field) {
	std::string contactField;

	std::cout << field;
	std::cin >> contactField;
	return (contactField);
}

void	Contact::fillContact() {
	this->_fname = this->_getFromUser("Enter the first name: ");
	this->_lname = this->_getFromUser("Enter the last name: ");
	this->_nickname = this->_getFromUser("Enter the nickname: ");
	this->_phone = this->_getFromUser("Enter the phone number: ");
	this->_secret = this->_getFromUser("Enter your darkest secret: ");
}