#include <iostream>
#include <string>
#include "PhoneBook.hpp"


int	main(void)
{
	std::string cmd;
	PhoneBook	phonebook;
	while (1)
	{

			std::cout << "Enter one of the three commands (ADD , SEARCH or EXIT): " << std::endl;
			std::getline(std::cin, cmd);
			if (cmd == "EXIT")
				break;
			else if (cmd == "ADD") {
				phonebook.add();
			} else if (cmd == "SEARCH")
				phonebook.search();
			else
				std::cout << "Invalid commands. Try Again." << std::endl;
	}
	return (0);
}