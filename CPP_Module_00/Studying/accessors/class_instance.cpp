#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void){
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo() : " << this->getFoo() << std::endl;
	return ;
}

Sample::~Sample(void){
	std::cout << "Destructor called" << std::endl;
	std::cout << "this->getFoo() : " << this->getFoo() << std::endl;
	std::cout << "this->_foo: " << this->_foo << std::endl;
	return ;
}

int	Sample::getFoo(void) const{
	return this->_foo;
}

void	Sample::setFoo(int v) {
	if (v >= 0)
		this->_foo = v;
	return ;
}
