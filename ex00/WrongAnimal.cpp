#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimalCommon")
{
	std::cout << "[WrongAnimal] constructor called (default)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "[WrongAnimal] copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
	std::cout << "[WrongAnimal] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->_type;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}
