#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] constructor called (default)" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &obj) : Animal(obj._type)
{
	std::cout << "[Cat] copy constructor called" << std::endl;
	this->_brain = new Brain(*obj._brain);
}

Cat &Cat::operator = (const Cat &obj)
{
	std::cout << "[Cat] assignation operator called" << std::endl;
	if (this != &obj)
		this->_type = obj._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] destructor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] 🐈Meow" << std::endl;
}

void Cat::showBrainInfo() const
{
	std::cout << "[Cat's brains 🐈🧠] " << this->_brain << std::endl;
}

void Cat::updateIdea(int index, const std::string& idea) {
	if (index < 0 || index >= 100)
	{
		std::cout << "[Cat] index is out of range : " << index << std::endl;
		return ;
	}
	this->_brain->setIdea(index, idea);
}

void Cat::printIdeas() const {
	int i = 0;
	while (i < 100)
	{
		if (this->_brain->getIdea(i) != "")
			std::cout << "Idea " << i << ": " << this->_brain->getIdea(i) << "(" << this->_brain->getPtr(i) << ")" << std::endl;
		i++;
	}
}