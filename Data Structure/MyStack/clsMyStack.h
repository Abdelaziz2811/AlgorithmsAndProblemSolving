#pragma once

#include "clsDblLinkedList.h"

using namespace std;

template <class T> class clsMyStack {

protected:
	clsDblLinkedList <T> _MyList;

public:
	void push(T Item) {

		_MyList.InsertAtBeginning(Item);
	}

	void Print() {

		_MyList.PrintList();
	}

	int Size() {

		return _MyList.Size();
	}

	T Top() {

		return _MyList.GetItem(0);
	}

	T Bottom() {

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

	void InsertAfter(int Index, T Value) {

		_MyList.InsertAfter(Index, Value);
	}

	void InsertAtTop(T Value) {

		_MyList.InsertAtBeginning(Value);
	}

	void InsertAtBottom(T Value) {

		_MyList.InsertAtEnd(Value);
	}

	void Clear() {

		_MyList.Clear();
	}

};

