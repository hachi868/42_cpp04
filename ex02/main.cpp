#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

__attribute__((destructor)) static void destructor()
{
	system("leaks -q ex02");
}

int main()
{
//	{
//		std::cout << "[test0] Animal" << std::endl;
//		//const Animal *meta = new Animal(); error!!
//		const Animal *j = new Dog();
//		const Animal *i = new Cat();
//		std::cout << j->getType() << " " << std::endl;
//		std::cout << i->getType() << " " << std::endl;
//		i->makeSound();
//		j->makeSound();
//		//meta->makeSound();
//
//		//delete meta;
//		delete j;
//		delete i;
//	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		//	Animal =>  WrongAnimal
//		//	Cat => WrongCat
//		std::cout << "[test1] WrongAnimal" << std::endl;
//		const WrongAnimal *mw = new WrongAnimal();
//		const WrongAnimal *iw = new WrongCat();
//		iw->makeSound();
//		mw->makeSound();
//		delete mw;
//		delete iw;
//	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		std::cout << "[test2] Default constructor" << std::endl;
//		Cat cat0;
//		Dog dog0;
//		std::cout << cat0.getType() << std::endl;
//		std::cout << dog0.getType() << std::endl;
//		cat0.makeSound();
//		dog0.makeSound();
//		std::cout << "----------" << std::endl;
//
//		std::cout << "[test3] Copy constructor" << std::endl;
//		Cat cat1(cat0);
//		Dog dog1(dog0);
//		std::cout << cat1.getType() << std::endl;
//		std::cout << dog1.getType() << std::endl;
//		cat1.makeSound();
//		dog1.makeSound();
//		std::cout << "----------" << std::endl;
//
//		std::cout << "[test4] Copy constructor" << std::endl;
//		Cat &cat3a = cat0;
//		Cat cat3 = cat3a;
//		Dog &dog3a = dog0;
//		Dog dog3 = dog3a;
//		std::cout << cat3.getType() << std::endl;
//		std::cout << dog3.getType() << std::endl;
//		cat3.makeSound();
//		dog3.makeSound();
//	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		std::cout << "[test5] Copy assignment & name constructor" << std::endl;
//		Cat cat4 = Cat();
//		Dog dog4 = Dog();
//		std::cout << cat4.getType() << std::endl;
//		std::cout << dog4.getType() << std::endl;
//		cat4.makeSound();
//		dog4.makeSound();
//	}
//	std::cout << "*-*-*-*-*-*-*" << std::endl;
//	std::cout << "*-* ex02 *-*" << std::endl;
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
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
//	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
//	{
//		std::cout << "[test2] Default constructor" << std::endl;
//		Cat cat0;
//		Dog dog0;
//		std::cout << cat0.getType() << std::endl;
//		std::cout << dog0.getType() << std::endl;
//		cat0.makeSound();
//		dog0.makeSound();
//		cat0.showBrainInfo();
//		dog0.showBrainInfo();
//		std::cout << "----------" << std::endl << std::endl;
//		std::cout << "[test3] Copy constructor" << std::endl;
//		Cat cat1(cat0);
//		Dog dog1(dog0);
//		std::cout << cat1.getType() << std::endl;
//		std::cout << dog1.getType() << std::endl;
//		cat1.makeSound();
//		dog1.makeSound();
//		cat1.showBrainInfo();
//		dog1.showBrainInfo();
//		std::cout << "----------" << std::endl << std::endl;
//
//		std::cout << "[test4] Copy constructor" << std::endl;
//		Cat &cat3a = cat0;
//		Cat cat3 = cat3a;
//		Dog &dog3a = dog0;
//		Dog dog3 = dog3a;
//		std::cout << cat3.getType() << std::endl;
//		std::cout << dog3.getType() << std::endl;
//		cat3.makeSound();
//		dog3.makeSound();
//		cat3.showBrainInfo();
//		dog3.showBrainInfo();
//	}
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
	std::cout << "*-*-*-*-*-*-*" << std::endl << std::endl;
	{
		std::cout << "[test6] deep copy" << std::endl;

		Cat a;
		std::cout << "/// 001 /// a.printIdeas" << std::endl << std::endl;
		a.printIdeas();
		a.updateIdea(1, "Idea_a1");
		a.updateIdea(3, "Idea_a3");
		a.updateIdea(5, "Idea_a5");
		a.updateIdea(7, "Idea_a7");
		a.updateIdea(9, "Idea_a9");
		std::cout << "/// 002 /// a.printIdeas(upd)" << std::endl << std::endl;
		a.printIdeas();
		std::cout << "Copy brain from a to b" << std::endl;
		{
			Cat b(a);
			std::cout << "/// 003 /// b.printIdeas(a copy)" << std::endl << std::endl;
			b.printIdeas();
			b.updateIdea(2, "Idea_b2");
			b.updateIdea(4, "Idea_b4");
			b.updateIdea(6, "Idea_b6");
			b.updateIdea(8, "Idea_b8");
			b.updateIdea(10, "Idea_b10");
			std::cout << "/// 004 /// b.printIdeas(a copy upd)" << std::endl << std::endl;
			b.printIdeas();
		}
		std::cout << "After b is destroyed" << std::endl;
		std::cout << "/// 005 /// a.printIdeas after b destroyed" << std::endl << std::endl;
		a.printIdeas();
		std::cout << "Copy brain from a to b" << std::endl;
		{
			Cat c = a;
			std::cout << "/// 006 /// c.printIdeas(a copy)" << std::endl << std::endl;
			c.printIdeas();
			c.updateIdea(1, "Idea_c1");
			c.updateIdea(2, "Idea_c2");
			c.updateIdea(3, "Idea_c3");
			c.updateIdea(5, "Idea_c5");
			c.updateIdea(7, "Idea_c7");
			c.updateIdea(9, "Idea_c9");
			std::cout << "/// 007 /// c.printIdeas(a copy upd)" << std::endl << std::endl;
			c.printIdeas();
		}
	}
	return (0);
}
