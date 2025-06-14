#pragma once

#include <iostream>

using namespace std;

template <class T> class clsDynamicArray {

protected:
	int _Size = 0;

public:
	T* OriginalArray;

	clsDynamicArray(int Size = 0) {

		if (Size < 0)
			Size = 0;

		_Size = Size;

		OriginalArray = new T[Size];
	}

	~clsDynamicArray() {

		delete[] OriginalArray;
	}

	bool SetItem(int Index, T Value) {

		if (Index >= _Size || Index < 0)
			return false;

		OriginalArray[Index] = Value;
		return true;
	}

	int Size() {

		return _Size;
	}

	bool IsEmpty() {

		return _Size == 0;
	}

	void Print() {

		for (short i = 0; i < _Size; i++)
			cout << OriginalArray[i] << " ";
		cout << endl;
	}

    void Resize(int NewSize) {

		if (NewSize < 0)
			NewSize = 0;

		_Size = NewSize;

		_TempArray = new T[NewSize];

		for (short i = 0; i < NewSize; i++) {

			_TempArray[i] = OriginalArray[i];
		}

		delete[] OriginalArray;
		OriginalArray = _TempArray;
	}

	T GetItem(int Index) {

		return OriginalArray[Index];
		// or return *(OriginalArray + Index);
	}

	void Reverse() {

		_TempArray = new T[_Size];

		for (short i = 0; i < _Size; i++) {

			_TempArray[i] = OriginalArray[_Size - i - 1];
		}

		OriginalArray = _TempArray;
	}

	void Clear() {

		_Size = 0;

		delete[] OriginalArray;
		OriginalArray = new T[_Size];
	}

	bool DeleteItemAt(int Index) {

		if (Index >= _Size || Index < 0)
			return false;

		_TempArray = new T[_Size - 1];

		for (short i = 0, j = 0; i < _Size; i++) {

			if (Index != i) {

				_TempArray[j] = OriginalArray[i];
				j++;
			}
		}

		_Size--;

		delete[] OriginalArray;

		OriginalArray = _TempArray;

		return true;
	}

	void DeleteFirstItem() {

		DeleteItemAt(0);
	}

	void DeleteLastItem() {

		DeleteItemAt(_Size - 1);
	}

		int Find(T Value) {

		for (short i = 0; i < _Size; i++) {

			if (OriginalArray[i] == Value)
				return i;
		}
		return -1;
	}

	bool DeleteItem(T Value) {

		int index = Find(Value);

		if (index == -1) {

			return false;
		}
		else {

			DeleteItemAt(index);
			return true;
		}
		// -> This will work too : return DeleteItemAt(Find(Value));
	}

	bool InsertAt(int index, T Value) {

		if (index >= _Size || index < 0)
			return false;

		_Size++;

		_TempArray = new T[_Size];
		
		// Copy all itmes before index
		for (short i = 0; i < index; i++) {

			_TempArray[i] = OriginalArray[i];
		}

		// Set value of inserted index
		_TempArray[index] = Value;

		// Copy all items after index
		for (short i = index; i < _Size - 1; i++) {

			_TempArray[i + 1] = OriginalArray[i];
		}

		delete[] OriginalArray;

		OriginalArray = _TempArray;
		return true;
	}

	bool InsertAtBeginning(T Value) {

		return InsertAt(0, Value);
	}

	bool InsertBefore(int index, T Value) {

		if (index < 1)
			return InsertAt(0, Value);
		else
			return InsertAt(index - 1, Value);
	}

	bool InsertAfter(int index, T Value) {

		if (index >= _Size)
			return InsertAt(_Size, Value);
		else
			return InsertAt(index + 1, Value);
	}

	bool InsertAtEnd(T Value) {

		return InsertAt(_Size, Value);
	}

};

