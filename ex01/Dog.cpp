#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] constructor called (default)" << std::endl;
	Dog::setType("Dog");
	this->_brain = new Brain();
}

Dog::Dog(const Dog &obj)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
	*this = obj;
	this->_brain = new Brain();
}

Dog &Dog::operator = (const Dog &obj)
{
	std::cout << "[Dog] assignation operator called" << std::endl;
	if (this != &obj)
		this->setType(obj._type);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] destructor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
		std::cout << "[Dog] 🐕Bark" << std::endl;
}
