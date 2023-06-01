#include <iostream>
#include "PhoneBook.hpp"


int	main(void)
{
	std::string cmd;
	PhoneBook	phonebook;
	while (1)
	{
		std::cout << "Enter one of the three commands (ADD , SEARCH or EXIT): ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
		{
			phonebook.add();
		}
		else if (cmd == "SEARCH")
			phonebook.search();
//		else
//			std::cout << "wrong command" << std::endl;
	}
	return (0);
}