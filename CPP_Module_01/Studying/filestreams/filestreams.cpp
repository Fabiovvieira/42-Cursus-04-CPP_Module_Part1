//
// Created by fvalli-v on 08-06-2023.
//

#include <iostream>
#include <fstream>
#include <string>

int 	main()
{
	std::string filename("numbers");
	std::ifstream ifs(filename.c_str());
	unsigned int dst;
	unsigned int dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();


	std::ofstream ofs("test.out");
	ofs << " my name is fabio" << std::endl;
	ofs.close();
	return 0;

}

//std::istringstream
//std::ostringstream

