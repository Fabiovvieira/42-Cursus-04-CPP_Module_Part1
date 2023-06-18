
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(), _HP(100), _EP(100), _AD(30){
	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 100;
	this->_attackDamage = 30;
} //Default Constructor

FragTrap::FragTrap(std::string name) : ClapTrap(name), _HP(100), _EP(100), _AD(30){
	std::cout << "Parametric FragTrap constructor called" << std::endl;
	this->_hitP = 100;
	this->_energyP = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src), _HP(src._HP), _EP(src._EP), _AD(src._AD){
	std::cout << "Copy FragTrap constructor called" << std::endl;
} //copy constructor

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
} //destructor

FragTrap	&FragTrap::operator=(FragTrap const &rhs){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitP = rhs._hitP;
		this->_energyP = rhs._energyP;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}//Copy assignment operator

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is giving High five." << std::endl;
}

