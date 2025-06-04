#pragma once

#include <iostream>

using namespace std;

template <class T> class clsDblLinkedList {

protected:
	int _Size = 0;

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

		_Size++;
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

		_Size++;
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

		_Size++;
	}
	
	void DeleteNode(Node*& NodeToDelete) {

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

		_Size--;
	}
	
	void DeleteFirstNode() {

		if (Head == NULL)
			return;

		Node* FirstNode = Head;

		Head = FirstNode->next;
		if (Head != NULL)
			Head->prev = NULL;

		delete FirstNode;

		_Size--;
	}
	
	void DeleteLastNode() {

		if (Head == NULL)
			return;

		if (Head->next == NULL) {
			
			delete Head;
			Head = NULL;
			_Size--;
			return;
		}
		
		Node* LastNode = Head;

		while (LastNode->next != NULL) {

			LastNode = LastNode->next;
		}

		LastNode->prev->next = NULL;
		delete LastNode;

		_Size--;
	}
	// Extension Number 1 (Size)
	int Size() {

		return _Size;
	}
	// Extension Number 2 (IsEmpty)
	bool IsEmpty() {

		return _Size == NULL;
	}
	// Extension Number 3 (Clear)
	void Clear() {

		while (Head != NULL) {
		
			DeleteFirstNode();
		}
	}
	// Extension Number 4 (Reverse)
	void Reverse() {

		Node* Current = Head;
		Node* Temp = nullptr;

		while (Current != nullptr) {

			Temp = Current->prev;
			Current->prev = Current->next;
			Current->next = Temp;

			Current = Current->prev;

			if (Current != nullptr)
				Head = Current;
		}
	}
	// Extension Number 5 (GetNode --> by index)
	Node* GetNode(int Index) {

		if (Index >= _Size || Index < 0 || Head == NULL)
			return NULL;

		Node* Current = Head;

		while (Index != 0) {

			Current = Current->next;
			Index--;
		}

		return Current;
	}
	// Extension Number 6 (GetItem --> Item Value Using GetNode)
	T GetItem(int Index) {

		Node* Item = GetNode(Index);
		
		if (Item == NULL)
			return NULL;
		else
			return Item->Value;
	}
	// Extension Number 7 (UpdateItemValue)
	bool UpdateItem(int Index, T NewValue) {

		Node* Item = GetNode(Index);

		if (Item != NULL) {

			Item->Value = NewValue;
			return true;
		}
		else
			return false;
	}
	// Extension Number 8 (Insert Item After spcific index)
	bool InsertAfter(int Index, T Value) {

		Node* Item = GetNode(Index);

		if (Item != NULL) {

			InsertAfter(Item, Value);
			return true;
		}
		else
			return false;
	}

};
