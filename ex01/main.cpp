#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q ex01");
}

// void testLoop(Animal *animal)
// {

// }

int main()
{
	std::cout << "[test0:]" << std::endl;
	const Animal *dog_i = new Dog();
	const Animal *cat_i = new Cat();
	dog_i->makeSound();
	dog_i->showBrainInfo();
	cat_i->makeSound();
	cat_i->showBrainInfo();
	delete dog_i;
	delete cat_i;
	std::cout << "----------" << std::endl;

	std::cout << "[test1:]" << std::endl;
	int num = 6;
	Animal *animalHorde1[num];

	int	i= 0;
	while (i < num / 2)
	{
		animalHorde1[i] = new Dog();
		animalHorde1[i]->makeSound();
		animalHorde1[i]->showBrainInfo();
		i++;
	}
	while (i < num)
	{
		animalHorde1[i] = new Cat();
		animalHorde1[i]->makeSound();
		animalHorde1[i]->showBrainInfo();
		i++;
	}
	i = 0;
	while (i < num)
	{
		delete animalHorde1[i];
		i++;
	}
	std::cout << "----------" << std::endl;

	// std::cout << "[test0] Default constructor" << std::endl;
	// Animal animal0;
	// testLoop(animal0);

	// std::cout << "[test1] name constructor" << std::endl;
	// Animal animal1("name_animal1");
	// testLoop(animal1);

	// std::cout << "[test2] Copy constructor" << std::endl;
	// Animal animal2(animal1);
	// testLoop(animal2);

	// std::cout << "[test3] Copy constructor" << std::endl;
	// Animal &animal3a = animal0;
	// Animal animal3 = animal3a;
	// testLoop(animal3);

	// std::cout << "[test4] Copy assignment & name constructor" << std::endl;
	// Animal animal4 = Animal("name_animal4");
	// testLoop(animal4);

	// std::cout << "[test5] new" << std::endl;
	// Animal *animal5 = new Animal("name_animal5");
	// testLoop(*animal5);
	// delete animal5;

	return (0);
}
