//
// Created by fvalli-v on 19-06-2023.
//

#include "Cat.hpp"


Cat::Cat() : Animal("Cat") {
	std::cout << "Default Cat constructor called" << std::endl;
} //Default Constructor

//Cat::Cat(Cat const &src) {
//	std::cout << "Copy Cat constructor called" << std::endl;
//} //copy constructor

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
} //destructor

//Cat	&Cat::operator=(Cat const &rhs){
//	std::cout << "Cat copy assignment operator called" << std::endl;
//	return *this;
//}//Copy assignment operator

void Cat::makeSound() const {
    std::cout << "Miau." << std::endl;
}