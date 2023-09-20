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
//	{
//		std::cout << "[test0:]" << std::endl;
//		const Animal *dog_i = new Dog();
//		const Animal *cat_i = new Cat();
//		dog_i->makeSound();
//		dog_i->showBrainInfo();
//		cat_i->makeSound();
//		cat_i->showBrainInfo();
//		delete dog_i;
//		delete cat_i;
//		std::cout << "----------" << std::endl;
//	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		std::cout << "[test1:]" << std::endl;
//		int num = 6;
//		Animal *animalHorde1[num];
//
//		int	i= 0;
//		while (i < num / 2)
//		{
//			animalHorde1[i] = new Dog();
//			animalHorde1[i]->makeSound();
//			animalHorde1[i]->showBrainInfo();
//			i++;
//		}
//		while (i < num)
//		{
//			animalHorde1[i] = new Cat();
//			animalHorde1[i]->makeSound();
//			animalHorde1[i]->showBrainInfo();
//			i++;
//		}
//		i = 0;
//		while (i < num)
//		{
//			delete animalHorde1[i];
//			i++;
//		}
//	}
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test2] Default constructor" << std::endl;
		Cat cat0;
		Dog dog0;
		std::cout << cat0.getType() << std::endl;
		std::cout << dog0.getType() << std::endl;
		cat0.makeSound();
		dog0.makeSound();
		cat0.showBrainInfo();
		dog0.showBrainInfo();
		std::cout << "----------" << std::endl << std::endl;
		std::cout << "[test3] Copy constructor" << std::endl;
		Cat cat1(cat0);
		Dog dog1(dog0);
		std::cout << cat1.getType() << std::endl;
		std::cout << dog1.getType() << std::endl;
		cat1.makeSound();
		dog1.makeSound();
		cat1.showBrainInfo();
		dog1.showBrainInfo();
		std::cout << "----------" << std::endl << std::endl;

		std::cout << "[test4] Copy constructor" << std::endl;
		Cat &cat3a = cat0;
		Cat cat3 = cat3a;
		Dog &dog3a = dog0;
		Dog dog3 = dog3a;
		std::cout << cat3.getType() << std::endl;
		std::cout << dog3.getType() << std::endl;
		cat3.makeSound();
		dog3.makeSound();
		cat3.showBrainInfo();
		dog3.showBrainInfo();
	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		std::cout << "[test5] Copy assignment & name constructor" << std::endl;
//		Cat cat4 = Cat();
//		Dog dog4 = Dog();
//		std::cout << cat4.getType() << std::endl;
//		std::cout << dog4.getType() << std::endl;
//		cat4.makeSound();
//		dog4.makeSound();
//		cat4.showBrainInfo();
//		dog4.showBrainInfo();
//	}
	return (0);
}
