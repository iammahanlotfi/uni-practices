//top = اشاره‌گر به گره بالای پشته
//تابع می‌تواند روی همان متغیر اصلی تغییر انجام دهد، نه یک کپی از آن
#include "pch.h"
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

void push(Node*& top, int p) {
	Node* newNode = new(Node);
	newNode->data = p;
	newNode->next = top;
	top = newNode;
}


int pop(Node*& top) {
	if (top == NULL) {
		cout << "empty" << endl;
		return -1;
	}
	Node* temp = top;
	int p = top->data;
	top = top->next;
	delete temp;
	return p;
}


int peek(Node* top) {
	if (top == NULL) {
		cout << "khali" << endl;
		return -1;
	}
	return top->data;
}

int main()
{
	Node* n1 = new Node;
	Node* n2 = new Node;
	Node* n3 = new Node;
	Node* n4 = new Node;
	Node* n5 = new Node;
	Node* n6 = new Node;

	cout << "1:";
	cin >> n1->data;


	cout << "2:";
	cin >> n2->data;


	cout << "3:";
	cin >> n3->data;


	cout << "4:";
	cin >> n4->data;


	cout << "5:";
	cin >> n5->data;

	cout << "6:";
	cin >> n6->data;

	Node* stack = NULL;

	push(stack, n1->data);
	push(stack, n2->data);
	push(stack, n3->data);
	push(stack, n4->data);
	push(stack, n5->data);
	push(stack, n6->data);

	cout << "Top of stack: " << peek(stack) << endl;


	cout << "pop:";
	while (stack != NULL) {
		cout << pop(stack) << " ";
	}
	cout << endl;

	return 0;
}