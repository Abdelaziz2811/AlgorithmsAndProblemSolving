#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T> class clsMyQueue {

protected:
	clsDblLinkedList <T> _MyList; // This is called composition (create an object of class inside another class)

public:
	void push(T Item) {

		_MyList.InsertAtEnd(Item);
	}

	void Print() {

		_MyList.PrintList();
	}

	int Size() {

		return _MyList.Size();
	}

	T front() {

		return _MyList.GetItem(0);
	}

	T back() {

		return _MyList.GetItem(Size() - 1);
	}

	void pop() {

		_MyList.DeleteFirstNode();
	}

	T GetItem(int Index) {

		return _MyList.GetItem(Index);
	}

	void Reverse() {

		_MyList.Reverse();
	}

	bool UpdateItem(int Index, T NewValue) {

		return _MyList.UpdateItem(Index, NewValue);
	}

	bool InsertAfter(int Index, T Value) {

		return _MyList.InsertAfter(Index, Value);
	}

	void InsertAtFront(T Item) {

		_MyList.InsertAtBeginning(Item);
	}

	void InsertAtBack(T Item) {

		_MyList.InsertAtEnd(Item);
	}

	void Clear() {

		_MyList.Clear();
	}

};