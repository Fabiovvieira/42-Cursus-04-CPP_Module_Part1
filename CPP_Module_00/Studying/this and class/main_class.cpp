void#include "Sample.class.hpp"
#include <iostream>

int	main(void)
{
	Sample instance;

	instance.foo = 42;

	std::cout << "instance.foo: " << instance.foo << std::endl;

	instance.bar();

	return (0);
}

// compilation:
// CPP main_clas.cpp class_instance.cpp