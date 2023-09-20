
#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "Animal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat &obj);
	WrongCat &operator = (const WrongCat &obj);
	~WrongCat();
	void makeSound() const;
};

#endif //__WRONGCAT_H__
