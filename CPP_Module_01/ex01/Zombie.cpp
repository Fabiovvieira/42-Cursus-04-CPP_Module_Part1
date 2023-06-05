//
// Created by fvalli-v on 05-06-2023.
//

#include "Zombie.hpp"


Zombie::Zombie(void){

}

Zombie::~Zombie(void){
	std::cout << this->_name << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}