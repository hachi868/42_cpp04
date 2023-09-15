
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class WrongCat : public Animal {
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat &operator = (const WrongCat &obj);
	~WrongCat();
	void makeSound() const;
};

#endif //__CAT_H__
