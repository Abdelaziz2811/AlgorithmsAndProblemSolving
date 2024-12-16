#include <iostream>
#include "clsMyString.h"

using namespace std;

int main() {

	cout << "\t\t\t-------------------------------------\n";
	cout << "\t\t\t\t<-Undo/Redo Project-> \n";
	cout << "\t\t\t-------------------------------------\n";

	clsMyString S1;

	cout << "\n S1 = " << S1.Value << endl;

	S1.Value = "Mohammed";

	cout << " S1 = " << S1.Value << endl;

	S1.Value = "Mohammed2";

	cout << " S1 = " << S1.Value << endl;

	S1.Value = "Mohammed3";

	cout << " S1 = " << S1.Value << endl;

	cout << "\n\n Undo : \n";
	cout << "_________________\n\n";

	S1.Undo();
	cout << " S1 after undo = " << S1.Value << endl;

	S1.Undo();
	cout << " S1 after undo = " << S1.Value << endl;

	S1.Undo();
	cout << " S1 after undo = " << S1.Value << endl;
	
	cout << "\n\n Redo : \n";
	cout << "_________________\n\n";

	S1.Redo();
	cout << " S1 after Redo = " << S1.Value << endl;

	S1.Redo();
	cout << " S1 after Redo = " << S1.Value << endl;

	S1.Redo();
	cout << " S1 after Redo = " << S1.Value << endl;

	return 0;
}