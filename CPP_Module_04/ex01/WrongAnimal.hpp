//
// Created by fvalli-v on 19-06-2023.
//

#ifndef CPP_MODULE_04_WRONGANIMAL_HPP
#define CPP_MODULE_04_WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
public:
	WrongAnimal(); //Default constructor
	virtual ~WrongAnimal();//destructor
	WrongAnimal(WrongAnimal const &src); //copy constructor
	WrongAnimal	&operator=(WrongAnimal const &rhs); //copy assignment operator
	virtual void makeSound(void) const;
	std::string getType(void) const;

protected:
	std::string	type;
	WrongAnimal(std::string name); //Parametric constructor

};


#endif //CPP_MODULE_04_WRONGANIMAL_HPP
