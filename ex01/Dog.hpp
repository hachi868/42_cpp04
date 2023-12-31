#ifndef __DOG_H__
#define __DOG_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog &obj);
	Dog &operator = (const Dog &obj);
	virtual ~Dog();
	virtual void makeSound() const;
	virtual void showBrainInfo() const;

private:
	Brain *_brain;
};

#endif //__DOG_H__
