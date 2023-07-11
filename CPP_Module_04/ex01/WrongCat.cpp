//
// Created by fvalli-v on 19-06-2023.
//

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called" << std::endl;
} //Default Constructor

//WrongCat::WrongCat(WrongCat const &src) {
//	std::cout << "Copy WrongCat constructor called" << std::endl;
//} //copy constructor

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
} //destructor

//WrongCat	&WrongCat::operator=(WrongCat const &rhs){
//	std::cout << "WrongCat copy assignment operator called" << std::endl;
//	return *this;
//}//Copy assignment operator

void WrongCat::makeSound() const {
    std::cout << "Wrong Miau." << std::endl;
}