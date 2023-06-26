//
// Created by fvalli-v on 19-06-2023.
//

#include "Animal.hpp"


Animal::Animal() : type("Animal"){
	std::cout << "Default Animal constructor called" << std::endl;
} //Default Constructor

Animal::Animal(std::string name) {
	std::cout << "Default Animal constructor called" << std::endl;
	this->type = name;
} //Default Constructor

Animal::Animal(Animal const &src) : type(src.getType()){
	std::cout << "Copy Animal constructor called" << std::endl;
} //copy constructor

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
} //destructor

Animal	&Animal::operator=(Animal const &rhs){
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}//Copy assignment operator

std::string Animal::getType(void) const{
	return this->type;
}

void Animal::makeSound() const {
	if(getType() == "Animal")
		std::cout << "I am an Animal and I don't make sound." << std::endl;
	else if(getType() == "Dog")
		std::cout << "Au au." << std::endl;
	else if(getType() == "Cat")
		std::cout << "Miau." << std::endl;
}