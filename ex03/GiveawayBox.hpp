#ifndef __GIVEAWAYBOX_HPP__
#define __GIVEAWAYBOX_HPP__

class Node {
public:
	Node(AMateria *materia);
	~Node();

private:
	AMateria	*_materia;
	Node		*_next;
	Node();
	Node(const Node &obj);
	Node &operator = (const Node &obj);
};

class GiveawayBox {
public:
	GiveawayBox();
	~GiveawayBox();
	void addMateria(AMateria *materia);
	void showList() const;

private:
	Node* _head;
	GiveawayBox(const GiveawayBox &obj);
	GiveawayBox &operator = (const GiveawayBox &obj);
};

#endif //__GIVEAWAYBOX_HPP__
