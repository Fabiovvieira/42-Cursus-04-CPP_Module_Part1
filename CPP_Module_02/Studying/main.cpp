//
// Created by fvalli-v on 12-06-2023.
//


#include <iostream>
#include "Sample.hpp"

int	main(void){
	Sample	instance1;
	Sample	instance2(42);
	Sample	instance3(instance1);

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return (0);
}