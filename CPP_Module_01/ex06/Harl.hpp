//
// Created by fvalli-v on 08-06-2023.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
	public:
		void	complain(std::string level);
		void	filter(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};


#endif //HARL_HPP
