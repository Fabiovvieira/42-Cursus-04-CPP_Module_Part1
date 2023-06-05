//
// Created by fvalli-v on 05-06-2023.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name) , _weapon(weapon){

}

void	HumanA::attack() {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}