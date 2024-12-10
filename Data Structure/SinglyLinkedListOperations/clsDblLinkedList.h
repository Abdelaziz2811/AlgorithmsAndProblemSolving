#pragma once

#include <iostream>

using namespace std;

template <class T> class clsDblLinkedList {

public:
	static class Node {
	
	public:
		T Value;
		Node* next;
	};
	
	Node* Head = NULL;

	void InsertAtBeginning(T Value) {

		Node* new_node = new Node();
		new_node->Value = Value;

		new_node->next = Head;
		Head = new_node;
	}
	
	void PrintList() {

		Node* Current = Head;
		while (Current != NULL) {

			cout << Current->Value << " ";
			Current = Current->next;
		}
		cout << "\n";
	}
	
	Node* Find(T Value) {

		if (Head == NULL)
			return NULL;

		if (Head->Value == Value)
			return Head;

		Node* Current = Head;
		while (Current->next != NULL) {

			Current = Current->next;
			if (Current->Value == Value)
				return Current;
		}

		return NULL;
	}
	
	void InsertAfter(Node* Prev_node, T Value) {

		if (Prev_node == NULL)
			return;

		Node* new_node = new Node();
		new_node->Value = Value;

		new_node->next = Prev_node->next;
		Prev_node->next = new_node;
	}
	
	void InsertAtEnd(T Value) {

		Node* new_node = new Node();
		new_node->Value = Value;
		new_node->next = NULL;

		if (Head == NULL) {

			Head = new_node;
			return;
		}

		Node* LastNode = Head;
		while (LastNode->next != NULL) {

			LastNode = LastNode->next;
		}
		LastNode->next = new_node;
	}
	
	void DeleteNode(Node* NodeToDelete) {

		if (Head == NULL || NodeToDelete == NULL)
			return;

		if (Head == NodeToDelete) {

			Head = NodeToDelete->next;
			delete NodeToDelete;
			return;
		}

		Node* Current = Head, * Prev = Head;
		while (Current != NULL && Current->Value != NodeToDelete->Value) {

			Prev = Current;
			Current = Current->next;
		}
		
		Prev->next = Current->next;
		delete NodeToDelete;
	}
	
	void DeleteFirstNode() {

		if (Head == NULL)
			return;

		Node* FirstNode = Head;

		Head = FirstNode->next;
		delete FirstNode;
	}
	
	void DeleteLastNode() {

		if (Head == NULL)
			return;

		Node* LastNode = Head;
		
		if (LastNode->next == NULL) {

			Head = NULL;
			delete LastNode;
			return;
		}

		Node* Prev = Head;

		while (LastNode->next != NULL) {

			Prev = LastNode;
			LastNode = LastNode->next;
		}

		Prev->next = NULL;
		delete LastNode;
	}

};

