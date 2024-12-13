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

	return 0;
}