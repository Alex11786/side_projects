#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl << std::endl;
	
	int		kolvo = 6;
	AAnimal 	*AAnimals[kolvo];
	int		k = 0;

	while (k < kolvo / 2)
		AAnimals[k++] = new Dog;
	while (k < kolvo)
		AAnimals[k++] = new Cat;
	std::cout << "---" << std::endl;
	
	k = 0;
	while (k < kolvo)
		AAnimals[k++]->makeSound();
	
	std::cout << "---" << std::endl;
	k = 0;
	while (k < kolvo)
		delete AAnimals[k++];
}