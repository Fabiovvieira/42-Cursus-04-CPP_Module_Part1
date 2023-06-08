#include "Harl.hpp"

int	main(int argc, char** argv)
{
	Harl	test;

	if (argc == 2)
	{
		std::string		level(argv[1]);
		test.complain(level);
	}
	else
		std::cout << "invalid number of parameter. Try again. Example: ./harl <level>" << std::endl;
	return (0);
}
