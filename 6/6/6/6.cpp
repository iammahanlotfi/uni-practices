#include "pch.h"
#include <iostream>
using namespace std; 
//برنامه ای بنویسید که دو لیست خطی را ادغام کند
struct Node {
	int Data;
	Node* Next; 
};

Node* MergeList(Node* Start1, Node* Start2) {
	Node* p; 
	p = Start1; 

	while (p->Next) {
		p = p->Next;
	}
	p->Next = Start2; 

	return(Start1);
}

void PrintList(Node* Start)
{
	Node* p;
	p = Start;
	while (p != NULL)
	{
		cout << p->Data << " "<<endl; 
			p = p->Next;
	}
}

int main() {
	Node* Start1 = new Node{ 10 , NULL };
	Start1->Next = new Node{ 20 , NULL };
	Start1->Next->Next = new Node{ 30 , NULL };

	Node* Start2 = new Node{ 40 , NULL };
	Start2->Next = new Node{ 50 , NULL };
	Start2->Next->Next = new Node{ 60 , NULL };

	cout << "Merged list: " << endl; 
	PrintList(MergeList(Start1, Start2));

}