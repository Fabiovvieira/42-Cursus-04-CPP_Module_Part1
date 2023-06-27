//
// Created by fvalli-v on 19-06-2023.
//

#include "Dog.hpp"


Dog::Dog() : Animal("Dog") {
	std::cout << "Default Dog constructor called" << std::endl;
} //Default Constructor

//Dog::Dog(Dog const &src) {
//	std::cout << "Copy Dog constructor called" << std::endl;
//} //copy constructor

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
} //destructor

//Dog	&Dog::operator=(Dog const &rhs){
//	std::cout << "Dog copy assignment operator called" << std::endl;
//	return *this;
//}//Copy assignment operator

void Dog::makeSound() const {
    std::cout << "Au au." << std::endl;
}