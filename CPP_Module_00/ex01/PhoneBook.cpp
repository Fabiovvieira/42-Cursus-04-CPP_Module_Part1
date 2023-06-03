#include<iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : _index(0), _size(0){
//	std::cout << "PhoneBook Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void){
//	std::cout << "PhoneBook Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(void){

//	std::cout << std::setfill ('x') << std::setw(15) << "add Contact" << std::endl;
	this->_contacts[this->_index % 8].fillContact();
	this->_index++;
	if (this->_size < 8)
		this->_size++;
	if (this->_index >= 8)
		this->_index = 0;
}

std::string	PhoneBook::_formatField(std::string field) {
	if (field.size() > 10)
		return (field.substr(0,9).append("."));
	else
		return (field);
}

bool	PhoneBook::_isNumber(const std::string str) {
		for(size_t i = 0; i < str.length(); i++) {
			if( !isdigit( str[i] )) {
				return (false);
			}
		}
		return (true);
}

void	PhoneBook::_displayIndexedContact() {
	std::string	index;
	int		num;

	while (1)
	{
		std::cout << "Select a contact by its index or \"BACK\" to go back to main menu: ";
		std::getline(std::cin, index);
		if (index == "BACK")
			break ;
		else if (index.empty())
		{
			std::cout << "Empty index, please choose one index." << std::endl;
			continue ;
		}
		else if (!this->_isNumber(index))
		{
			std::cout << "Invalid input, not a number or is a negative number. Try Again." << std::endl;
			continue ;
		}
		num = std::atoi(index.c_str());
		if (num > this->_size - 1)
			std::cout << "Invalid input, index out of range. Try again." << std::endl;
		else
			this->_contacts[num].getfullContact();
	}

}

void	PhoneBook::_displayAllContacts() {
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "First name" << "|";
	std::cout << std::setw(10) << "Last name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < this->_size ; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->_formatField(this->_contacts[i].getfname()) << "|";
		std::cout << std::setw(10) << this->_formatField(this->_contacts[i].getlname()) << "|";
		std::cout << std::setw(10) << this->_formatField(this->_contacts[i].getnickname()) << std::endl;
	}
}


void	PhoneBook::search(void){
//	std::cout << std::setfill ('x') << std::setw(15) << "search Contact" << std::endl;
	this->_displayAllContacts();
	this->_displayIndexedContact();

}