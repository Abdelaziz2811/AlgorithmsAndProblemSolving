#pragma once

#include <iostream>
#include <stack>

using namespace std;

class clsMyString {

private:
	string _Value;
	stack <string> _Undo;
	stack <string> _Redo;

public:
	clsMyString(string Value = "") {

		_Value = Value;
	}

	void SetValue(string Value) {

		_Undo.push(_Value);
		_Value = Value;
	}

	string GetValue() {

		return _Value;
	}

	__declspec(property(get = GetValue, put = SetValue)) string Value;

	void Undo() {

		if (!_Undo.empty()) {

			_Redo.push(_Value);
			_Value = _Undo.top();
			_Undo.pop();
		}
	}

	void Redo() {

		if (!_Redo.empty()) {

			_Undo.push(_Value);
			_Value = _Redo.top();
			_Redo.pop();
		}
	}

};

