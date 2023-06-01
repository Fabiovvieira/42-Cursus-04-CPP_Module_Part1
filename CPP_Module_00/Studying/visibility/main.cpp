#include <iostream>
#include "Sample.class.hpp"

int	main(void){
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "instance.publicFoo = " << instance.publicFoo << std::endl;


	//compilation error private atribute within the context
//	 instance._privateFoo = 42;
	// std::cout << "instance._privateFoo = " << instance._privateFoo << std::endl;

	instance.publicBar();
	//compilation error private atribute within the context
	// instance._privateBar();

	return (0);
}