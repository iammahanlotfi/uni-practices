#include "pch.h"
#include <iostream>
using namespace std;
//برنامه ای بنویسید که گره با مقدار x را از لیست خطی با سرلیست start حذف کند

struct Node
{
	int Data;
	Node* Next;
};

void DeleteNode(Node* Start, int x) {
	Node* p = Start; 
	Node* q = NULL; 
	while (p->Data!=x && p->Next!=NULL) 
	{
		q = p;
		p = p->Next;
	}

	if (p->Next != NULL) {
		q->Next = p->Next; 
		delete(p); 
	}
}

void PrintList(Node* Start)
{
	Node* p;
	p = Start;
	while (p != NULL)
	{
		cout << p->Data << " "  <<endl; 
			p = p->Next;
	}
}

int main() {
	Node* Start = new Node{ 10 , NULL };
	Start->Next = new Node{ 20 , NULL }; 
	Start->Next->Next = new Node{ 30 , NULL };

	cout << "Initial list: " <<endl;
	PrintList(Start);

	DeleteNode(Start, 20);
	cout << "After deleting 20: "<<endl;
	PrintList(Start);
	return 0;
}


