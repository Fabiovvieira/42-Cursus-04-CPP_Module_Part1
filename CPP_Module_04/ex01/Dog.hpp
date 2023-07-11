//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_DOG_HPP
#define CPP_MODULE_04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
	Dog(); //Default constructor
	~Dog();//destructor
//	Dog(Dog const &src); //copy constructor
//	Dog	&operator=(Dog const &rhs); //copy assignment operator
    void makeSound(void) const;

private:
	Brain*	_brain;
};


#endif //CPP_MODULE_04_DOG_HPP
