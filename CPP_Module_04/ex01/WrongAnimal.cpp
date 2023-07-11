//
// Created by fvalli-v on 19-06-2023.
//

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
} //Default Constructor

WrongAnimal::WrongAnimal(std::string name) {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	this->type = name;
} //Default Constructor

WrongAnimal::WrongAnimal(WrongAnimal const &src) : type(src.getType()){
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
} //copy constructor

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
} //destructor

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs){
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}//Copy assignment operator

std::string WrongAnimal::getType(void) const{
	return this->type;
}

void WrongAnimal::makeSound() const {
		std::cout << "I am an WrongAnimal and I don't make sound." << std::endl;
}