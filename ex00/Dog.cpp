#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] constructor called (default)" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj._type)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
}

Dog &Dog::operator = (const Dog &obj)
{
	std::cout << "[Dog] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "[Dog] 🐕Bark" << std::endl;
}
