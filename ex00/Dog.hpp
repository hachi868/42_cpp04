#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	Dog &operator = (const Dog &obj);
	virtual ~Dog();
	virtual void makeSound() const;
};

#endif //__DOG_H__
