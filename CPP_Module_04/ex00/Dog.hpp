//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_DOG_HPP
#define CPP_MODULE_04_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog(); //Default constructor
	~Dog();//destructor
//	Dog(Dog const &src); //copy constructor
//	Dog	&operator=(Dog const &rhs); //copy assignment operator
};


#endif //CPP_MODULE_04_DOG_HPP
