#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main() {
	
	clsDynamicArray <int> MyDaynamicArray(5);

	MyDaynamicArray.SetItem(0, 10);
	MyDaynamicArray.SetItem(1, 20);
	MyDaynamicArray.SetItem(2, 30);
	MyDaynamicArray.SetItem(3, 40);
	MyDaynamicArray.SetItem(4, 50);

	cout << "\n Is Empty ? " << MyDaynamicArray.IsEmpty() << endl;
	cout << "\n Array Size : " << MyDaynamicArray.Size() << endl;
	cout << "\n Array Items : "; 
	MyDaynamicArray.Print();

	// Extension #1 [Resize]
	// Case 1 :
	MyDaynamicArray.Resize(2);

	cout << "\n Array Size after resize to 2 : " << MyDaynamicArray.Size() << endl;

	cout << "\n Array Items after resize to 2 : ";
	MyDaynamicArray.Print();
	// Case 2 :
	MyDaynamicArray.Resize(10);

	cout << "\n Array Size after resize to 10 : " << MyDaynamicArray.Size() << endl;

	cout << "\n Array Items after resize to 10 : ";
	MyDaynamicArray.Print();

	// Extensions #2 To #4
	
	cout << "\n Item(2) : " << MyDaynamicArray.GetItem(2) << endl;

	MyDaynamicArray.Reverse();
	cout << "\n Array Items after Reverse : ";
	MyDaynamicArray.Print();

	MyDaynamicArray.Clear();
	cout << "\n Array Items after clear : ";
	MyDaynamicArray.Print();

	// Extension #5 Delete Item At specific index

	MyDaynamicArray.DeleteItemAt(2);
	cout << "\n Array items after delete Item(2) : ";
	MyDaynamicArray.Print();

	// Extension #6 Delete First Item

	MyDaynamicArray.DeleteFirstItem();
	cout << "\n Array items after delete first item : ";
	MyDaynamicArray.Print();

	// Extension #7 Delete Last Item

	MyDaynamicArray.DeleteLastItem();
	cout << "\n Array items after delete last item : ";
	MyDaynamicArray.Print();

	// Extension #8 Find index by value

	int index = MyDaynamicArray.Find(30);
	if (index == -1)
		cout << "\n Item with value 30 is not found" << endl;
	else
		cout << "\n Item with value 30 is found at index " << index << endl;
	
	// Extension #9 Delete item through its value

	MyDaynamicArray.DeleteItem(30);
	cout << "\n Array Items after delete 30 : ";
	MyDaynamicArray.Print();
	cout << " Size : " << MyDaynamicArray.Size();

	return 0;
}