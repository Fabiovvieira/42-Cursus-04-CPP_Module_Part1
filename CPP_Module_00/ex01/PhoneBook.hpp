#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

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
	short	_index;

};

#endif