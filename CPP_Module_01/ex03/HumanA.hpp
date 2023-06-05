//
// Created by fvalli-v on 05-06-2023.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& weapon);
		void	attack(void);

	private:
		std::string	_name;
		Weapon&		_weapon;
};


#endif //HUMANA_HPP
