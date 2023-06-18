#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{

public:
	ScavTrap(); //Default Constructor
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src); //copy constructor
	~ScavTrap(); //destructor
	ScavTrap	&operator=(ScavTrap const &rhs); //Copy assignment operator

	void attack(const std::string& target);
	void guardGate();

protected:
	int const _HP;
	int const _EP;
	int const _AD;
};

#endif