//
// Created by fvalli-v on 18-06-2023.
//

//both animal should be at the same Class animal since they have similar members and methods
//look at the heritage2.cpp for the correct way
class Animal{
private:
	int	_numberOfLegs;

public:
	Animal();
	Animal(Cat const &);
	Animal	&operator=(Animal const &);
	~Animal();

	void	run(int distance);
	void	call();
	void	eat(std::string const &what);
	void	walk(int distance);
};

//the Cat inheritage from the Animal publicaly
class Cat : public Animal{
public:
	Cat();
	Cat(Cat const &);
	Cat	&operator=(Cat const &);
	~Cat();

	void	scornSomeone(std::string const &target);
};

class Otter : public Animal{
public:
	Otter();
	Otter(Otter const &);
	Otter	&operator=(Otter const &);
	~Otter();
};

class Pony : public Animal{
public:
	Pony();
	Pony(Pony const &);
	Pony	&operator=(Pony const &);
	~Pony();

	void	run(int distance);

	void	doMagic(std::string const &target);
};