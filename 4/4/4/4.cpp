#include "pch.h"
#include <iostream>
using namespace std;
//برنامه ای بنویسید که یک لیست پیوندی با سرلیست start را به یک لیست حلقوی تبدیل کند

struct Node {
	int Data; 
	Node* Next; 
};

void ChangeToCircular(Node* Start) {
	if (Start == NULL) return; 

	Node* p; 
	p = Start; 

	while (p->Next!=NULL)
	{
		p = p->Next;
	}

	p->Next = Start; 

}

void PrintCircularList(Node* Start, int count) {
	if (Start == NULL) return;

	Node* p = Start;
	for (int i = 0; i < count; i++) {
		cout << p->Data << " ";
		p = p->Next;
	}
	cout << endl;
}

int main() {

	Node* Start = new Node{ 10, NULL };
	Start->Next = new Node{ 20, NULL };
	Start->Next->Next = new Node{ 30, NULL };

	ChangeToCircular(Start);

	cout << "Circular list (printed 6 times to show looping): ";
	PrintCircularList(Start, 6);

	return 0;
}