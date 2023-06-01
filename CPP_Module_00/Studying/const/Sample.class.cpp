#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi(f), qd(42){
	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const {
	//const at and member of a class doesnt allow this member altering
	//this instance
	std::cout << "this.pi = " << this->pi << std::endl;
	std::cout << "this.qd = " << this->qd << std::endl;

//	 this->qd = 0;
	//although qd is not const, the member bar is const
	return;
}
