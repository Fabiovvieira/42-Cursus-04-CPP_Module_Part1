#include <iostream>

int	main(void)
{
	int	numberofballs = 42;

	int	*ballsPtr = &numberofballs;
	int	&ballsRef = numberofballs;

	std::cout << numberofballs << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberofballs << std::endl;
	ballsRef = 84;
	std::cout << numberofballs << std::endl;
	return (0);
}