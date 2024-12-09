#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main() {

	clsDblLinkedList <int> MyDbLinkedList;

	MyDbLinkedList.InsertAtBeginning(5);
	MyDbLinkedList.InsertAtBeginning(4);
	MyDbLinkedList.InsertAtBeginning(3);
	MyDbLinkedList.InsertAtBeginning(2);
	MyDbLinkedList.InsertAtBeginning(1);
	
	cout << "\n * Linked List Content : ";
	MyDbLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N1 = MyDbLinkedList.Find(2);

	if (N1 == NULL)
		cout << "\n * Node is Not Found :-(\n";
	else
		cout << "\n * Node with value 2 is Found :-)\n";

	MyDbLinkedList.InsertAfter(N1, 500);
	cout << "\n * Linked List Content after insert 500 after 2 : ";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.InsertAtEnd(700);
	cout << "\n * Linked List Content after insert 700 at End : ";
	MyDbLinkedList.PrintList();

	clsDblLinkedList<int>::Node* N2 = MyDbLinkedList.Find(4);

	MyDbLinkedList.DeleteNode(N2);
	cout << "\n * Linked List Content after Delete 4 : ";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteFirstNode();
	cout << "\n * Linked List Content after Delete First Node : ";
	MyDbLinkedList.PrintList();

	MyDbLinkedList.DeleteLastNode();
	cout << "\n * Linked List Content after Delete Last Node : ";
	MyDbLinkedList.PrintList();

	return 0;
}