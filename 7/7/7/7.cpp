#include "pch.h"
#include <iostream>

using namespace std;

// مسئله ژوزفیوس

struct Node {
	int Data; 
	Node* Next; 
};
void josephus(Node* Start) {
	Node* p = Start;
	while (p->Next != p) {
		p->Next = p->Next->Next;
		p = p->Next;
	}
	cout << p->Data << " " << endl; 
}

int main() {
	Node* start = new Node{ 1 , NULL };
	start->Next = new Node{ 2 , NULL };
	start->Next->Next = new Node{ 3 , NULL };
	start->Next->Next->Next = new Node{ 4 , NULL };
	start->Next->Next->Next->Next = new Node{ 5 , NULL };
	
	Node* last = start->Next->Next->Next->Next;
	last->Next = start;
	josephus(start);
	return 0; 

}
