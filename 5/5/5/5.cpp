#include "pch.h"
#include <iostream>
using namespace std;
//برنامه ای بنویسید که یک لیست پیوندی خطی بسازد و آنرا معکوس کرده چاپ کند
struct Node {
	int Data; 
	Node* Next; 
};

Node* ReverseList(Node* Start) {
	Node* p, *q, *r; 
	p = Start; 
	q = p; 
	r = p->Next; 

	while (r!=NULL)
	{
		q = p; 
		p = r;
		r = p->Next;
		p->Next = q; 
	}
	Start->Next = NULL; 
	Start = p;
	return Start;
}

void PrintList(Node* Start) {
	Node* p;
	p = Start;
	while (p!=NULL)
	{
		cout << p->Data << " " << endl;
		p = p->Next;
	}
}

int main() {
	Node* Start = new Node{ 10 , NULL }; 
	Start->Next = new Node{ 20 , NULL }; 
	Start->Next->Next = new Node{ 30 , NULL };

	cout << "Initial list: " << endl; 
	PrintList(Start);

	cout << "Reversed list: " << endl;
	PrintList(ReverseList(Start));


}

