//
// Created by fvalli-v on 19-06-2023.
//

#include "Brain.hpp"


Brain::Brain(){
	std::cout << "Default Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = "idea";
	}
} //Default Constructor

/*Brain::Brain(std::string name) {
	std::cout << "Default Brain constructor called" << std::endl;
	this->type = name;
} //Default Constructor*/

Brain::Brain(Brain const &src){
	std::cout << "Copy Brain constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = src.ideas[i];
	}
} //copy constructor

Brain::~Brain(){
	std::cout << "Brain destructor called" << std::endl;
} //destructor

Brain	&Brain::operator=(Brain const &rhs){
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &rhs){
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}//Copy assignment operator

