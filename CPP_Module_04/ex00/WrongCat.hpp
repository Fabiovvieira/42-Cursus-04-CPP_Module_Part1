//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_WRONGCAT_HPP
#define CPP_MODULE_04_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat(); //Default constructor
	~WrongCat();//destructor
//	WrongCat(WrongCat const &src); //copy constructor
//	WrongCat	&operator=(WrongCat const &rhs); //copy assignment operator
    void makeSound(void) const;
};


#endif //CPP_MODULE_04_WRONGCAT_HPP
