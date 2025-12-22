#include "pch.h"
#include <iostream>
using namespace std; 

//برنامه ای بنویسید که آخرین گره یک لیست پیوندی با سرلیست start راحذف کند

struct Node {
	int Data; 
	Node* Next; 
};

void DeleteLastNode(Node* Start) {
	if (Start == NULL) return; 
	if (Start->Next == NULL) {
		delete Start; 
		return; 
	}

	Node* p = Start;
	Node* q = NULL;
	while (p->Next != NULL)
	{
		q = p;
		p = p->Next;
	}
	q->Next = NULL; 
	delete(p);

}

void PrintList(Node* Start) {
	Node*  p; 
	p = Start; 
	while (p != NULL) {
		cout << p->Data << " "<<endl;
		p = p->Next; 
	}
}


int main() {
	Node* Start = new Node{ 15, NULL }; 
	Start->Next = new Node{ 20 , NULL };
	Start->Next->Next = new Node{ 30, NULL };

	cout << "Initial list: "<<endl;
	PrintList(Start);

	DeleteLastNode(Start);

	cout << "Final List: "<<endl;
	PrintList(Start);

	return 0; 
}