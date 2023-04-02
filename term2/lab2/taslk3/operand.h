#ifndef OPERAND_H
#define OPERAND_H


class Operand{
private:
	int size = 0;
	struct Node{
		Node(double inf):inf(inf){};
		Node* next;
		double inf;
	};
private:
	Node* top = nullptr;
public:
	void erase();
	Operand();
	double end();
	double answer();
	~Operand();
	void push(double inf);
	double er();
};
#endif // OPERAND_H
