#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

    const WrongAnimal* WrongMeta = new WrongAnimal();
    const WrongAnimal* WrongI = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

    std::cout << WrongMeta->getType() << " " << std::endl;
    std::cout << WrongI->getType() << " " << std::endl;
    WrongI->makeSound(); //will output the Wrongcat sound!
    WrongMeta->makeSound();

	delete(meta);
	delete(j);
	delete(i);
    delete (WrongMeta);
    delete (WrongI);

	std::cout <<  std::endl;
	const Animal* zoo[6] = {new Dog(),new Dog(),new Dog(),new Cat(),new Cat(),new Cat()};
	for (int i = 0; i < 6; i++)
	{
		delete zoo[i];
		std::cout <<  std::endl;
	}




	return 0;
}
