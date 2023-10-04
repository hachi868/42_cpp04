#include "GiveawayBox.hpp"

Node::Node(AMateria *materia) :  _next(NULL), _materia(materia)
{
	std::cout << "[Node] constructor called (materia)" << std::endl;
}

Node::~Node()
{
	std::cout << "[Node] destructor called" << std::endl;
//もしかするとここでfreeでよかったかもしれない
}

GiveawayBox::GiveawayBox() : _head(NULL)
{
	std::cout << "[GiveawayBox] constructor called (default)" << std::endl;
}

GiveawayBox::~GiveawayBox()
{
	std::cout << "[GiveawayBox] destructor called" << std::endl;
	Node* temp = _head;
	Node* next;
	while (temp) {
		next = temp->_next;
		delete temp;
		temp = NULL;//ダブルフリー防ぐ
		temp = next;
	}
}

void GiveawayBox::addMateria(AMateria *materia)
{
	Node* newNode = new Node(materia);
	if (!_head)
		_head = newNode;
	else
	{
		Node* temp = _head;
		while (temp->_next) {
			temp = temp->_next;
		}
		temp->_next = newNode;
	}
}

void GiveawayBox::showList() const
{
	Node* temp = _head;
	while (temp) {
		std::cout << temp->_materia->getType() << " > ";
		temp = temp->_next;
	}
	std::cout << std::endl;
}
