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

	cout << "\n Array Size : " << MyDaynamicArray.Size() << endl;

	cout << "\n Array Items after resize to 2 : ";
	MyDaynamicArray.Print();
	// Case 2 :
	MyDaynamicArray.Resize(0);

	cout << "\n Array Size : " << MyDaynamicArray.Size() << endl;

	cout << "\n Array Items after resize to 10 : ";
	MyDaynamicArray.Print();

	return 0;
}