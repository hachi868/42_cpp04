
#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &obj);
	Cat &operator = (const Cat &obj);
	virtual ~Cat();
	virtual void makeSound() const;
	virtual void showBrainInfo() const;
	void updateIdea(int index, const std::string& idea);
	void printIdeas() const;

private:
	Brain *_brain;
};

#endif //__CAT_H__
