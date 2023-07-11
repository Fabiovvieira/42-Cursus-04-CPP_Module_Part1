//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_BRAIN_HPP
#define CPP_MODULE_04_BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
public:

	Brain(); //Default constructor
//	Brain(std::string name); //Parametric constructor
	~Brain();//destructor
	Brain(Brain const &src); //copy constructor
	Brain	&operator=(Brain const &rhs); //copy assignment operator

protected:
	std::string	ideas[100];

};


#endif //CPP_MODULE_04_BRAIN_HPP
