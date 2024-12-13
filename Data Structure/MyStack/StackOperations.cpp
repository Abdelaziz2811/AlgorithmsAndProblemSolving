#include <iostream>
#include "clsMyStack.h"

using namespace std;

int main() {
	
	clsMyStack <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);
	
	cout << "\n * Stack Content : ";
	MyStack.Print();

	cout << "\n * Stack Size : " << MyStack.Size();

	cout << "\n * Stack Top : " << MyStack.Top();

	cout << "\n * Stack Bottom : " << MyStack.Bottom();

	MyStack.pop();
	cout << "\n\n * Satck Content after pop : ";
	MyStack.Print();

	// Extension #1
	cout << "\n * Item(2) : " << MyStack.GetItem(2);

	// Extension #2
	MyStack.Reverse();
	cout << "\n\n * Stack after Reverse : ";
	MyStack.Print();

	// Extension #3
	MyStack.UpdateItem(2, 600);
	cout << "\n * Stack after update item(2) to 600 : ";
	MyStack.Print();

	// Extension #4
	MyStack.InsertAfter(2, 800);
	cout << "\n * Stack after insert 800 after item(2) : ";
	MyStack.Print();

	// Extension #5
	MyStack.InsertAtFront(1000);
	cout << "\n * Stack after insert 1000 at top : ";
	MyStack.Print();

	// Extension #6
	MyStack.InsertAtBack(2000);
	cout << "\n * Stack after insert 2000 at Bottom : ";
	MyStack.Print();

	// Extension #7
	MyStack.Clear();
	cout << "\n * Stack after Clear : ";
	MyStack.Print();

    return 0;
}