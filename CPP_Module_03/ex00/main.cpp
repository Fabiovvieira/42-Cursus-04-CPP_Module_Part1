#include "ClapTrap.hpp"

int	main(void){
	ClapTrap	one("Fabio");
	ClapTrap	two(one);
	ClapTrap	three;
	three = one;

	std::cout << std::endl;

	one.attack("Target");
	one.beRepaired(1);
	one.takeDamage(1);
	one.takeDamage(5);
	one.beRepaired(1);
	one.beRepaired(10);
	one.beRepaired(1);
	one.takeDamage(10);
	one.beRepaired(1);
	one.beRepaired(10);

	std::cout << std::endl;

	two.attack("Target");
	two.beRepaired(1);
	two.takeDamage(1);
	two.takeDamage(5);
	two.beRepaired(1);
	two.beRepaired(10);
	two.beRepaired(1);
	two.takeDamage(10);
	two.beRepaired(1);
	two.beRepaired(10);

	std::cout << std::endl;

	three.attack("Target");
	three.beRepaired(1);
	three.takeDamage(1);
	three.takeDamage(5);
	three.beRepaired(1);
	three.beRepaired(10);
	three.beRepaired(1);
	three.takeDamage(10);
	three.beRepaired(1);
	three.beRepaired(10);

	std::cout << std::endl;
}