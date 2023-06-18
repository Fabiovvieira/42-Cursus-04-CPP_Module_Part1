#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{

public:
	ClapTrap(); //Default Constructor
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &src); //copy constructor
	~ClapTrap(); //destructor
	ClapTrap	&operator=(ClapTrap const &rhs); //Copy assignment operator

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

private:
	std::string		_name;
	int	_hitP;
	int	_energyP;
	int	_attackDamage;
	int const _HP;
	int const _EP;
};

#endif