#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "[Dog] constructor called (default)" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &obj) : Animal(obj._type)
{
	std::cout << "[Dog] copy constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
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
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "[Dog] 🐕Bark" << std::endl;
}

void Dog::showBrainInfo() const
{
	std::cout << "[Dog's brains 🐕🧠] " << this->_brain << std::endl;
}
