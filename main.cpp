#include<iostream>
#include "Node.h"

using namespace std;

int main(int argc, char *argv[]) {
	int Value;
	bool flag = true;
	cout << "please enter a node Data (integer number {+= )" << endl;
	cin >> Value;
	Node Tree(Value);
	Tree.PrintInOrder();

	while (flag) {
		cout << "enter node Data" << endl;
		cin >> Value;
		if (Value != -1)
			Tree.Insert(Value);
		else
			flag = false;
	}
	Tree.PrintInOrder();
	system("pause");
}