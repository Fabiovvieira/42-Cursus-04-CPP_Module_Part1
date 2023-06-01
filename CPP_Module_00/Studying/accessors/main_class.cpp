#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample instance;

	instance.setFoo(42);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo(50);
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;



	return (0);
}

// compilation:
// CPP main_class.cpp class_instance.cpp