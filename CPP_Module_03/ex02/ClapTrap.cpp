
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unnamed"), _hitP(10), _energyP(10), _attackDamage(0), _HP(10), _EP(10), _AD(0) {
	std::cout << "Default ClapTrap constructor called" << std::endl;
} //Default Constructor

ClapTrap::ClapTrap(std::string name) : _name(name), _hitP(10), _energyP(10), _attackDamage(0), _HP(10), _EP(10), _AD(0) {
	std::cout << "Parametric ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _name(src._name), _hitP(src._hitP), _energyP(src._energyP), _attackDamage(src._attackDamage), _HP(src._HP), _EP(src._EP), _AD(src._AD){
	std::cout << "Copy ClapTrap constructor called" << std::endl;
} //copy constructor

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
} //destructor

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs){
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitP = rhs._hitP;
		this->_energyP = rhs._energyP;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}//Copy assignment operator

void ClapTrap::attack(const std::string& target){
	if (this->_energyP > 0 && this->_hitP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyP--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " don't have enough Energy points or Hit points to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took damage of " << amount << " hit Points!" << std::endl;
		this->_hitP -= amount;
		if (this->_hitP < 0)
			this->_hitP = 0;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energyP > 0 && this->_hitP > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself and got " << amount << " hit points back." << std::endl;
		this->_energyP--;
		this->_hitP += amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " don't have enough Energy points or Hit points to repair itself." << std::endl;
}
