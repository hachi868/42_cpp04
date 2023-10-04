#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "[MateriaSource] constructor called (default)" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "[MateriaSource] copy constructor called" << std::endl;
	*this = obj;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
	std::cout << "[MateriaSource] assignation operator called" << std::endl;
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
	std::cout << "[MateriaSource] destructor called" << std::endl;
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
		std::cout << "[MateriaSource] learnMateria : i: " << i << std::endl;
		if (!this->_memory[i])
		{
			this->_memory[i] = materiaNew;
			std::cout << "[MateriaSource] learnMateria : " << this->_memory[i]->getType() << std::endl;
			return ;
		}
		i++;
	}
	std::cout << "[MateriaSource] Can't learn Materia : FULL" << std::endl;
	delete materiaNew;//todo: 引数でnew AMATERIAしているので。Giveawayに格納？
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;
	while (i < this->MEMORY_SIZE)
	{
		if (this->_memory[i]->getType() == type)
		{
			std::cout << "[MateriaSource] createMateria : " << type << std::endl;
			return (this->_memory[i]->clone());
		}
		i++;
	}
	std::cout << "[MateriaSource] Can't create Materia : Don't know." << std::endl;
	return (NULL);
}
