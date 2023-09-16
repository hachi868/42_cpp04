#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

//__attribute__((destructor))
//static void destructor() {
//	system("leaks -q ex00");
//}

int main()
{
	std::cout << "[test1:]" << std::endl;
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

	std::cout << "[test2:]" << std::endl;
//	Animal =>  WrongAnimal
//	Cat => WrongCat

	const WrongAnimal *mw = new WrongAnimal();
	const WrongAnimal *iw = new WrongCat();
	iw->makeSound();
	mw->makeSound();

	delete mw;
	delete iw;

	std::cout << "[test3:]" << std::endl;
	const Animal *j_d = new Dog();
	const Animal *i_d = new Cat();
	std::cout << j_d->getType() << " " << std::endl;
	std::cout << i_d->getType() << " " << std::endl;
	j_d->makeSound();
	i_d->makeSound();

	delete j_d;
	delete i_d;

	std::cout << "[test4:]" << std::endl;
	const WrongCat *iwc = new WrongCat();
	iwc->makeSound();
	delete iwc;

	return (0);
}
