#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	Dog::setType("Dog");
	std::cout << "[Dog] constructor called (default)" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
	*this = obj;
}

Dog &Dog::operator = (const Dog &obj)
{
	std::cout << "[Dog] assignation operator called" << std::endl;
	if (this != &obj)
		this->getType() = obj._type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
