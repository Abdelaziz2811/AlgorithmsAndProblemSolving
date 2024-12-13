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



};

