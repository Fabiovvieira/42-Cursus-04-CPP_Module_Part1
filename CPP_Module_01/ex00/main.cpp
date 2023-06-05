#include "Zombie.hpp"

int main(void)
{
	Zombie	*fabio;
	fabio = newZombie("fabio");
	fabio->announce();
	randomChump("valli");
	fabio->announce();
	delete (fabio);
	return (0);
}