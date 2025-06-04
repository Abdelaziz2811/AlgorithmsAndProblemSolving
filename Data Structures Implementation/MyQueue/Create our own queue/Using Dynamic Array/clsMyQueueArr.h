#pragma once

#include "clsDynamicArray.h"

template <class T> class clsMyQueueArr {

protected:
	clsDynamicArray<T> Arr;

public:
	void push(T Value) {

		Arr.InsertAtEnd(Value);
	}

	void Print() {

		Arr.Print();
	}

	int Size() {

		return Arr.Size();
	}

	T front() {

		return Arr.GetItem(0);
	}

	T back() {

		return Arr.GetItem(Arr.Size() - 1);
	}

	void pop() {

		return Arr.DeleteFirstItem();
	}

	T GetItem(int index) {

		return Arr.GetItem(index);
	}

	void Reverse() {

		Arr.Reverse();
	}

	bool UpdateItem(int index, T Value) {

		return Arr.SetItem(index, Value);
	}

	bool InsertAfter(int index, T Value) {

		return Arr.InsertAfter(index, Value);
	}

	bool InsertAtFront(T Value) {

		return Arr.InsertAtBeginning(Value);
	}

	bool InsertAtBack(T Value) {

		return Arr.InsertAtEnd(Value);
	}

	void Clear() {

		Arr.Clear();
	}

};

