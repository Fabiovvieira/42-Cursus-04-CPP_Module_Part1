#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap{

public:
	DiamondTrap(); //Default Constructor
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &src); //copy constructor
	~DiamondTrap(); //destructor
	DiamondTrap	&operator=(DiamondTrap const &rhs); //Copy assignment operator

	void whoAmI();
	int	get_hitP(void);
	int	get_energyP(void);
	int	get_attackDamage(void);

private:
	std::string		_name;

};

#endif