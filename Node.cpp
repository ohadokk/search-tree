#include <iostream>
#include "Node.h"

using namespace std;

Node:: Node(int data) {
	Data = data;
}

void Node:: Insert(int value) {
	if (value <= Data) {
		if (Left == nullptr) {
			Left = new Node(value);
		}
		else {
			(*Left).Insert(value);
		}
	}
	else {
		if (Right == nullptr) {
			Right = new Node(value);
		}
		else {
			(*Right).Insert(value);
		}
	}

}

bool Node::Contains(int value) {
	if (value == Data) {
		return true;
	}
	else if (value < Data) {
		if (Left == nullptr) {
			return false;
		}
		else {
			(*Left).Contains(value);
		}
	}
	else {
		if (Right == nullptr) {
			return false;
		}
		else {
			return (*Right).Contains(value);
		}
	}
}

void Node::PrintInOrder() {
	if (Left != nullptr) {
		(*Left).PrintInOrder();
	}
	cout << Data;
	if (Right != nullptr) {
		(*Right).PrintInOrder();
	}
}
