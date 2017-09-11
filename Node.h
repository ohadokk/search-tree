
class Node {
protected:
	Node* Left;
	Node* Right;
	int Data;
public:
	Node(int data);
	void Insert(int value);
	bool Contains(int value);
	void PrintInOrder(void);



};
