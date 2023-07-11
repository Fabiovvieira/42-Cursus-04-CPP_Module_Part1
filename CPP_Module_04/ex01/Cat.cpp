//
// Created by fvalli-v on 19-06-2023.
//

#include "Cat.hpp"


Cat::Cat(){
	std::cout << "Default Cat constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
} //Default Constructor

//Cat::Cat(Cat const &src) {
//	std::cout << "Copy Cat constructor called" << std::endl;
//} //copy constructor
//I GOT LOOK AT THE COPY CONSTRUCTOR


Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
	delete (this->_brain);
} //destructor

//Cat	&Cat::operator=(Cat const &rhs){
//	std::cout << "Cat copy assignment operator called" << std::endl;
//	return *this;
//}//Copy assignment operator

void Cat::makeSound() const {
    std::cout << "Miau." << std::endl;
}