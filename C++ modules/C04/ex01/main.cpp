#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	
	int		kolvo = 4;
	Animal 	*animals[kolvo];
	int		k = 0;

	while (k < kolvo / 2)
		animals[k++] = new Dog;
	while (k < kolvo)
		animals[k++] = new Cat;
	std::cout << "---" << std::endl;
	
	k = 0;
	while (k < kolvo)
		animals[k++]->makeSound();
	
	std::cout << "---" << std::endl;
	k = 0;
	while (k < kolvo)
		delete animals[k++];
}