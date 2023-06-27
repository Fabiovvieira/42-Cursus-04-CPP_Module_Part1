//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_CAT_HPP
#define CPP_MODULE_04_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat(); //Default constructor
	~Cat();//destructor
//	Cat(Cat const &src); //copy constructor
//	Cat	&operator=(Cat const &rhs); //copy assignment operator
    void makeSound(void) const;
};


#endif //CPP_MODULE_04_CAT_HPP
