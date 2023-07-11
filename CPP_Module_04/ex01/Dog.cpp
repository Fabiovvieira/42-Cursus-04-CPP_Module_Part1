//
// Created by fvalli-v on 19-06-2023.
//

#include "Dog.hpp"


Dog::Dog(){
	std::cout << "Default Dog constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
} //Default Constructor

//Dog::Dog(Dog const &src) {
//	std::cout << "Copy Dog constructor called" << std::endl;
//} //copy constructor
//I GOT LOOK AT THE COPY CONSTRUCTOR

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
	delete (this->_brain);
} //destructor

//Dog	&Dog::operator=(Dog const &rhs){
//	std::cout << "Dog copy assignment operator called" << std::endl;
//	return *this;
//}//Copy assignment operator

void Dog::makeSound() const {
    std::cout << "Au au." << std::endl;
}