//
// Created by fvalli-v on 05-06-2023.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <string>
#include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);
		void	announce( void );

	private:
		std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );


#endif
