//
// Created by fvalli-v on 18-06-2023.
//

//both animal should be at the same Class animal since they have similar members and methods
//look at the heritage2.cpp for the correct way
class Cat{
private:
	int	_numberOfLegs;

public:
	Cat();
	Cat(Cat const &);
	Cat	&operator=(Cat const &);
	~Cat();

	void	run(int distance);

	void	scornSomeone(std::string const &target);
};

class Pony{
private:
	int	_numberOfLegs;

public:
	Pony();
	Pony(Pony const &);
	Pony	&operator=(Pony const &);
	~Pony();

	void	run(int distance);

	void	doMagic(std::string const &target);
};