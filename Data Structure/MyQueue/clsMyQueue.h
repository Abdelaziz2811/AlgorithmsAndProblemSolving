#pragma once

#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T> class clsMyQueue {

protected:
	clsDblLinkedList <T> _MyList; // This is called composition (create an object of class inside another class)

public:
	void push(T Value) {

		_MyList.InsertAtEnd(Value);
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

};