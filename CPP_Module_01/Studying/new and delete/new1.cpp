#include <iostream>
#include <string>

class	Student{
	private:
		std::string	_login;

	public:
		// Student(std::string login) : _login(login)
		Student() : _login("ldefault")
		{
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

// int 	main()
// {
// 	Student	bob = Student("Fabio");
// 	Student	*jim = new Student("valli");

// 	delete jim;

// 	return (0);
// }

int 	main()
{
	Student	*students = new Student[42];

	delete [] students;

	return (0);
}