#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char** argv)
{
	std::string		line;
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::size_t		index = 0;

	if (argc == 4)
	{
		std::string		filename(argv[1]);
		std::string		s1(argv[2]);
		std::string		s2(argv[3]);
		ifs.open(argv[1], std::ifstream::in);
		if (ifs.is_open())
		{
			filename.append(".replace");
			ofs.open(filename.c_str(), std::ofstream::out | std::ofstream::trunc);
			if (ofs.is_open())
			{
				while (ifs.good()) {
					std::getline(ifs, line);
					index = 0;
					while ((index = line.find(s1, index)) != std::string::npos) {
						line.erase(index, s1.size());
						line.insert(index, s2);
						index += s2.size();
					}
					if (!ifs.eof())
						ofs << line << std::endl;
					else
						ofs << line;
				}
				ifs.close();
				ofs.close();
			}
			else
				std::cout << "Error opening file: " << filename << std::endl;
		}
		else
			std::cout << "Error opening file: " << argv[1] << std::endl;
	}
	else
		std::cout << "invalid parameter. Try again. Example: ./sedisforlosers <filename> <s1> <s2>" << std::endl;
	return (0);
}


// https://cplusplus.com/reference/fstream/ofstream/
// int main () {

//   std::ofstream ofs;
//   ofs.open ("test.txt", std::ofstream::out | std::ofstream::app);

//   ofs << " more lorem ipsum";

//   ofs.close();

//   return 0;
// }

// https://cplusplus.com/reference/fstream/ifstream/
// int main () {
//   std::ifstream ifs;

//   ifs.open ("test.txt", std::ifstream::in);

//   char c = ifs.get();

//   while (ifs.good()) {
//     std::cout << c;
//     c = ifs.get();
//   }

//   ifs.close();

//   return 0;
// }