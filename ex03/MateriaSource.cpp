#include "MateriaSource.hpp"

const std::string RESET = "\033[0m";
const std::string DEBUG = "\033[90m";
const std::string STATE = "\033[36m";
const std::string MSG = "\033[34m";

MateriaSource::MateriaSource()
{
	std::cout << DEBUG << "[MateriaSource] constructor called (default)" << RESET << std::endl;
	int i = 0;
	while (i < this->MEMORY_SIZE)
	{
		this->_memory[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << DEBUG << "[MateriaSource] copy constructor called" << RESET << std::endl;
	*this = obj;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
	std::cout << DEBUG << "[MateriaSource] assignation operator called" << RESET << std::endl;
	if (this != &obj)
	{
		int i = 0;
		while (i < this->MEMORY_SIZE)
		{
			this->_memory[i] = obj._memory[i];
			i++;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << DEBUG << "[MateriaSource] destructor called" << RESET << std::endl;
	int i = 0;
	while (i < this->MEMORY_SIZE)
	{
		if (_memory[i])
			delete _memory[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria *materiaNew)
{
	int i = 0;
	while (i < this->MEMORY_SIZE)
	{
		if (!this->_memory[i])
		{
			this->_memory[i] = materiaNew;
			std::cout << STATE << "[MateriaSource] learnMateria : " << this->_memory[i]->getType() << RESET << std::endl;
			return ;
		}
		i++;
	}
	std::cout << STATE << "[MateriaSource] Can't learn Materia : FULL" << RESET << std::endl;
	delete materiaNew;//todo: 引数でnew AMATERIAしているので。Giveawayに格納？
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < this->MEMORY_SIZE)
	{
		if (this->_memory[i] && this->_memory[i]->getType() == type)
		{
			std::cout << STATE << "[MateriaSource] createMateria : " << type << RESET << std::endl;
			return (this->_memory[i]->clone());
		}
		i++;
	}
	std::cout << STATE << "[MateriaSource] Can't create Materia : Don't know." << RESET << std::endl;
	return (NULL);
}
