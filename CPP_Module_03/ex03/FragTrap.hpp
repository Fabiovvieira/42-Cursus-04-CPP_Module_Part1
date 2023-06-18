#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	FragTrap(); //Default Constructor
	FragTrap(std::string name);
	FragTrap(FragTrap const &src); //copy constructor
	~FragTrap(); //destructor
	FragTrap	&operator=(FragTrap const &rhs); //Copy assignment operator

	void highFivesGuys(void);

protected:
	int const _HP;
	int const _EP;
	int const _AD;

};

#endif