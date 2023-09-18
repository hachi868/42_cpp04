#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q ex01");
}

int main()
{
	std::cout << "[test1:]" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "[test2:]" << std::endl;
	int num = 6;
	Animal *animalHorde[num];

	int	i= 0;
	while (i < num / 2)
	{
		animalHorde[i] = new Dog();
		i++;
	}
	while (i < num)
	{
		animalHorde[i] = new Cat();
		i++;
	}
	delete[] animalHorde;

	return (0);
}
