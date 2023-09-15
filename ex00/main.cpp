#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

//__attribute__((destructor))
//static void destructor() {
//	system("leaks -q ex00");
//}

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

//	const WrongAnimal *mw = new WrongAnimal();
//	const WrongAnimal *iw = new WrongCat();
//	std::cout << mw->getType() << " " << std::endl;
//	std::cout << iw->getType() << " " << std::endl;
//	iw->makeSound();
//	mw->makeSound();
//
//	delete mw;
//	delete iw;
	return 0;
}
