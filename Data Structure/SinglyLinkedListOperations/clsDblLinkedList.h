#pragma once

#include <iostream>

using namespace std;

template <class T> class clsDblLinkedList {

public:
	class Node {
	
	public:
		T Value;
		Node* next;
		Node* prev;
	};
	
	Node* Head = NULL;
	
	void InsertAtBeginning(T Value) {

		Node* new_node = new Node();
		new_node->Value = Value;
		new_node->prev = NULL;

		new_node->next = Head;
		if (Head != NULL)
			Head->prev = new_node;
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
	
	void InsertAfter(Node* Current, T Value) {

		if (Current == NULL)
			return;

		Node* new_node = new Node();
		new_node->Value = Value;

		new_node->next = Current->next;
		new_node->prev = Current;

		if (Current->next != NULL)
			Current->next->prev = new_node;

		Current->next = new_node;
	}
	
	void InsertAtEnd(T Value) {

		Node* new_node = new Node();
		new_node->Value = Value;
		new_node->next = NULL;

		if (Head == NULL) {

			Head = new_node;
			new_node->prev = NULL;
			return;
		}

		Node* LastNode = Head;
		while (LastNode->next != NULL) {

			LastNode = LastNode->next;
		}
		LastNode->next = new_node;
		new_node->prev = LastNode;
	}
	
	void DeleteNode(Node* NodeToDelete) {

		if (Head == NULL || NodeToDelete == NULL)
			return;

		if (Head == NodeToDelete) {

			Head = NodeToDelete->next;
		}

		if (NodeToDelete->next != NULL) {

			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {

			NodeToDelete->prev->next = NodeToDelete->next;
		}

		delete NodeToDelete;
	}
	
	void DeleteFirstNode() {

		if (Head == NULL)
			return;

		Node* FirstNode = Head;

		Head = FirstNode->next;
		if (Head != NULL)
			Head->prev = NULL;

		delete FirstNode;
	}
	
	void DeleteLastNode() {

		if (Head == NULL)
			return;

		if (Head->next == NULL) {
			
			delete Head;
			Head = NULL;
			return;
		}
		
		Node* LastNode = Head;

		while (LastNode->next != NULL) {

			LastNode = LastNode->next;
		}

		LastNode->prev->next = NULL;
		delete LastNode;
	}

};