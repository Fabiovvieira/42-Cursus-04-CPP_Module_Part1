//
// Created by fvalli-v on 05-06-2023.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL){

}

void	HumanB::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}