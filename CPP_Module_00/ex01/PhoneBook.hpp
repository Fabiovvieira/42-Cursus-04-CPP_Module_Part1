#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <ctype.h>
#include <string.h>
#include <cstdlib>
# include <iomanip>

class PhoneBook {

public:
	//constructor
	PhoneBook (void);
	//destructor
	~PhoneBook (void);
	void	add(void);
	void	search(void);

private:
	Contact	_contacts[8];
	void	_displayAllContacts(void);
	void	_displayIndexedContact(void);
	std::string	_formatField(std::string field);
	bool	_isNumber(const std::string str);
	int	_index;
	int	_size;

};

#endif