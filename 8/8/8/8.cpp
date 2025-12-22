#include "pch.h"
#include<iostream>

using namespace std;

//وارونه کردن لیست حلقوی

struct Node {
	int Data; 
	Node* Next; 
};

Node* ReverseCircular(Node* Start) {
	Node* p, *q, *r; 
	p = Start; 
	q = p;
	r = p->Next; 
	while (r != Start) {
		q = p;
		p = r; 
		r = p->Next;
		p->Next = q;
	}
	Start->Next = p;
	Start = p;
	return Start;
}

void PrintCircular(Node* Start, int count) {
	if (Start == NULL) return; 

	Node* p = Start; 

	for (int i = 0; i < count; i++) {
		cout << p->Data << " "; 
		p = p->Next;
	}
	cout << endl; 

}

int main() {
	Node* start = new Node{ 10, NULL };
	start->Next = new Node{ 20, NULL };
	start->Next->Next = new Node{ 30, NULL };
	start->Next->Next->Next = start;

	cout << "Original circular list: ";
	PrintCircular(start, 9);


	cout << "Reversed circular list: ";
	PrintCircular(ReverseCircular(start), 9);

	return 0;
}
