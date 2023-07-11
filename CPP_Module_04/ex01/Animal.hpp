//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_ANIMAL_HPP
#define CPP_MODULE_04_ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
	Animal(); //Default constructor
	virtual ~Animal();//destructor
	Animal(Animal const &src); //copy constructor
	Animal	&operator=(Animal const &rhs); //copy assignment operator
	virtual void makeSound(void) const;
	std::string getType(void) const;
	Animal(std::string name); //Parametric constructor

protected:
	std::string	type;


};


#endif //CPP_MODULE_04_ANIMAL_HPP
