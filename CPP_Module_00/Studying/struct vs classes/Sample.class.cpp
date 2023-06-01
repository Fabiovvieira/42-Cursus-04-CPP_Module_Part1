#include <iostream>
#include "Sample.class.hpp"
#include "Sample.class1.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) const {

	std::cout << "Member function bar() called" << std::endl;

	return;
}

Sample1::Sample1(void){
	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample1::~Sample1(void){
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample1::bar(void) const {

	std::cout << "Member function bar() called" << std::endl;

	return;
}

