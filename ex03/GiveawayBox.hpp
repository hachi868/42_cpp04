#ifndef __GIVEAWAYBOX_HPP__
#define __GIVEAWAYBOX_HPP__

#include <iostream>
#include "AMateria.hpp"

class Node {
public:
	Node(AMateria *materia);
	~Node();
	Node	*_next;
	AMateria	*_materia;

private:
	Node();
	Node(const Node &obj);
	Node &operator = (const Node &obj);
};

class GiveawayBox {
public:
	GiveawayBox();
	GiveawayBox(const GiveawayBox &obj);
	GiveawayBox &operator = (const GiveawayBox &obj);
	~GiveawayBox();
	void addMateria(AMateria *materia);
	void showList() const;

private:
	Node* _head;
};

#endif //__GIVEAWAYBOX_HPP__
