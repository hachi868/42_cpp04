#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal {
public:
	Animal();
	Animal(const Animal &obj);
	Animal &operator = (const Animal &obj);
	virtual ~Animal();
	virtual void makeSound() const;
	virtual void showBrainInfo() const;
	std::string getType() const;
	void setType(std::string type);
protected:
	std::string _type;
};

#endif //__ANIMAL_H__
