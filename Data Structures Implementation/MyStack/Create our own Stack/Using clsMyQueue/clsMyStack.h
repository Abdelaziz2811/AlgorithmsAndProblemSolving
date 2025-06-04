#pragma once

#include "clsMyQueue.h"

using namespace std;

template <class T> class clsMyStack : public clsMyQueue <T> {

public:
	void push(T Value) {

		clsMyQueue <T>::_MyList.InsertAtBeginning(Value);
	}

	T Top() {

		return clsMyQueue <T>::front();
	}

	T Bottom() {

		return clsMyQueue <T>::back();
	}
};

