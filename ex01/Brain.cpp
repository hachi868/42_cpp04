#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] constructor called (default)" << std::endl;
	this->setIdeaWhile("ideaTxt");
}

Brain::Brain(const Brain &obj)
{
	std::cout << "[Brain] copy constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator = (const Brain &obj)
{
	std::cout << "[Brain] assignation operator called" << std::endl;
	if (this != &obj)
	{
		int i = 0;
		while (i < 100)
		{
			this->_ideas[i] = obj._ideas[i];
			i++;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "[Brain] destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

const std::string *Brain::getPtr(int index) const
{
	return (&this->_ideas[index]);
}

void Brain::setIdeaWhile(std::string idea)
{
	int i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea + std::to_string(i);
		i++;
	}
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100) {
		std::cout << "[Brain] index is out of range : " << index << std::endl;
		return ;
	}
	this->_ideas[index] = idea;
}
