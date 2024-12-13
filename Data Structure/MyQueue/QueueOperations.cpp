#include <iostream>
#include "clsMyQueue.h"

using namespace std;

int main() {
	
	clsMyQueue <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);
	
	cout << "\n * Queue Content : ";
	MyQueue.Print();

	cout << "\n * Queue Size : " << MyQueue.Size();

	cout << "\n * Queue front : " << MyQueue.front();

	cout << "\n * Queue back : " << MyQueue.back();

	MyQueue.pop();

	cout << "\n\n * Queue Content after pop : ";
	MyQueue.Print();

	// Extension #1
	cout << "\n * Item(2) : " << MyQueue.GetItem(2);

	// Extension #2
	MyQueue.Reverse();
	cout << "\n * Queue after Reverse : ";
	MyQueue.Print();

	// Extension #3
	MyQueue.UpdateItem(2, 600);
	cout << "\n * Queue after update item(2) to 600 : ";
	MyQueue.Print();

	// Extension #4
	MyQueue.InsertAfter(2, 800);
	cout << "\n * Queue after insert 800 after item(2) : ";
	MyQueue.Print();

	// Extension #5
	MyQueue.InsertAtFront(1000);
	cout << "\n * Queue after insert 1000 at front : ";
	MyQueue.Print();

	// Extension #6
	MyQueue.InsertAtBack(2000);
	cout << "\n * Queue after insert 2000 at Back : ";
	MyQueue.Print();

	// Extension #7
	MyQueue.Clear();
	cout << "\n * Queue after Clear : ";
	MyQueue.Print();

	return 0;
}