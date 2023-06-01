#include "Sample.class1.hpp"
#include "Sample.class2.hpp"
#include <iostream>



int	main(void)
{
	Sample1 instance1('a', 42, 4.2f);
	Sample2 instance2('b', 50, 10.14f);
	return (0);
}

// compilation:
// CPP main_clas.cpp class_instance.cpp