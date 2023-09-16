#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("AnimalCommon")
{
	std::cout << "[Animal] constructor called (default)" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "[Animal] copy constructor called" << std::endl;
	*this = obj;
}

Animal &Animal::operator = (const Animal &obj)
{
	std::cout << "[Animal] assignation operator called" << std::endl;
	if (this != &obj)
		this->setType(obj._type);
	return (*this);
}

Animal::~Animal()
{
	std::cout << "[Animal] destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "[Animal] 🙊" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}
