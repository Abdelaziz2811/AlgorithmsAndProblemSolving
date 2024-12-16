#pragma once

#include "clsMyQueueArr.h"

template <class T> class clsMyStackArr : public clsMyQueueArr <T> {

public:

	void push(T Value) {

		clsMyQueueArr<T>::Arr.InsertAtBeginning(Value);
	}

	T Top() {

		return clsMyQueueArr<T>::front();
	}

	T Bottom() {

		return clsMyQueueArr<T>::back();
	}

};

