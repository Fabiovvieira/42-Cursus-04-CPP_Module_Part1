#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return ;
}

//in a non member function there is no pointer "this" past
//as a first parameter. that is why u cannot use "this" here.
int	Sample::getNbInst(void){
	return Sample::_nbInst;
}

int	Sample::_nbInst = 0;