//
// Created by fvalli-v on 08-06-2023.
//

#include "Harl.hpp"

void Harl::complain(std::string level) {
	void	(Harl::*f[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};;
	std::string					levelName[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levelName[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	std::cout << "invalid level. Chose one of: \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\" " << std::endl;
}

void Harl::filter(std::string level) {
	std::string					levelName[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levelName[i] == level)
		{
			switch (i) {
				case 0:
					std::cout << "[" << level << "]" << std::endl;
					this->complain("DEBUG");
					std::cout << std::endl;
					break;

				case 1:
					std::cout << "[" << level << "]" << std::endl;
					this->complain("INFO");
					std::cout << std::endl;
					break;

				case 2:
					std::cout << "[" << level << "]" << std::endl;
					this->complain("WARNING");
					std::cout << std::endl;
					break;

				case 3:
					std::cout << "[" << level << "]" << std::endl;
					this->complain("ERROR");
					std::cout << std::endl;
					return;
			}
			if (i != 3)
				level = levelName[i + 1];
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug(void){
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}