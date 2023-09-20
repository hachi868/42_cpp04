#ifndef __CURE_HPP__
#define __CURE_HPP__

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &obj);
	Cure &operator=(const Cure &obj);
	virtual ~Cure();
};

#endif //__CURE_HPP__
