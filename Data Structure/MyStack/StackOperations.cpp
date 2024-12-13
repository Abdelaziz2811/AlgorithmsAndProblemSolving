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

    return 0;
}