#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("AnimalCommon")
{
	std::cout << "[Animal] constructor called (default)" << std::endl;
}

Animal::Animal(const std::string type) : _type(type)
{
	std::cout << "[Animal] constructor called (type)" << std::endl;
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "[Animal] copy constructor called" << std::endl;
}

Animal &Animal::operator = (const Animal &obj)
{
	std::cout << "[Animal] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

// Animal *animalHorde(int N)
// {
// 	Animal *animalHorde = new Animal[N];
// 	return (animalHorde);
// }

void Animal::makeSound() const
{
	std::cout << "[Animal] 🙊" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::showBrainInfo() const
{
	std::cout << "[Animal] 🧠showBrainInfo" << std::endl;
}
