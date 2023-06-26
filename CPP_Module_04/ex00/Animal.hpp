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
	~Animal();//destructor
	Animal(Animal const &src); //copy constructor
	Animal	&operator=(Animal const &rhs); //copy assignment operator
	void makeSound(void) const;
	std::string getType(void) const;

protected:
	std::string	type;
	Animal(std::string name); //Parametric constructor

};


#endif //CPP_MODULE_04_ANIMAL_HPP
