#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap	one("Fabio");

	std::cout << std::endl;

	one.whoAmI();

	std::cout << "_hitP = " << one.get_hitP() << std::endl;
	std::cout << "_energyP = " << one.get_energyP() << std::endl;
	std::cout << "_attackDamage = " << one.get_attackDamage() << std::endl;
	std::cout << std::endl;
	one.attack("Target");
	one.takeDamage(20);
	std::cout << "_hitP = " << one.get_hitP() << std::endl;
	std::cout << "_energyP = " << one.get_energyP() << std::endl;
	std::cout << "_attackDamage = " << one.get_attackDamage() << std::endl;
	std::cout << std::endl;
	one.beRepaired(10);
	std::cout << "_hitP = " << one.get_hitP() << std::endl;
	std::cout << "_energyP = " << one.get_energyP() << std::endl;
	std::cout << "_attackDamage = " << one.get_attackDamage() << std::endl;

	std::cout << std::endl;

	return 0;
}