
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 50;
	this->_attackDamage = 20;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
} //Default Constructor

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Parametric ScavTrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 50;
	this->_attackDamage = 20;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src){
	std::cout << "Copy ScavTrap constructor called" << std::endl;
	*this = src;
} //copy constructor

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
} //destructor

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitP = rhs._hitP;
		this->_energyP = rhs._energyP;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}//Copy assignment operator

void ScavTrap::attack(const std::string& target){
	if (this->_energyP > 0 && this->_hitP > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyP--;
	}
	else
		std::cout << "ScavTrap " << this->_name << " don't have enough Energy points or Hit points to attack." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
}

