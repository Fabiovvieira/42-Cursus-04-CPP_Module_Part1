//
// Created by fvalli-v on 05-06-2023.
//

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int N = 10;

	horde = zombieHorde(N, "fabio");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}