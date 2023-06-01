#include<iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _index(0){
	std::cout << "PhoneBook Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
	std::cout << "PhoneBook Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(void){

	std::cout << std::setfill ('x') << std::setw(15) << "add Contact" << std::endl;
	this->_contacts[this->_index % 8].fillContact();
	this->_index++;
	if (this->_index >= 8)
		this->_index = 0;
}


void	PhoneBook::search(void){
	std::cout << std::setfill ('x') << std::setw(15) << "search Contact" << std::endl;
}