#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	ClapTrap::_name = "unnamed";
	ClapTrap::_name += "_clap_name";
	this->_name = "unnamed";
	this->_hitP = FragTrap::_HP;
	this->_energyP = ScavTrap::_EP;
	this->_attackDamage = FragTrap::_AD;
} //Default Constructor

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	std::cout << "Parametric DiamondTrap constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitP = FragTrap::_HP;
	this->_energyP = ScavTrap::_EP;
	this->_attackDamage = FragTrap::_AD;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src), _name(src._name){
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
} //copy constructor

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called" << std::endl;
} //destructor

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->_name = rhs._name;
		this->_hitP = rhs._hitP;
		this->_energyP = rhs._energyP;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}//Copy assignment operator

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap's name is " << this->_name << " and its ClapTrap's name is " << ClapTrap::_name << std::endl;
}

int	DiamondTrap::get_hitP(void){
	return (this->_hitP);
}

int	DiamondTrap::get_energyP(void){
	return (this->_energyP);
}

int	DiamondTrap::get_attackDamage(void){
	return (this->_attackDamage);
}