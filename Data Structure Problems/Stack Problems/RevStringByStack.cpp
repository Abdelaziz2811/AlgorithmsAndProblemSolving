#include <iostream>
#include <stack>

using namespace std;

string ReverseString(string str) {

    string RevString;

    stack <char> stkChar;

    for (char C : str) {

        stkChar.push(C);
    }

    while (!stkChar.empty()) {

        RevString += stkChar.top();
        stkChar.pop();
    }
    return RevString;
}

int main()
{

    string OriginalString = "Hello world!";

    cout << "Original string : " << OriginalString << endl;
    cout << "Reversed string : " << ReverseString(OriginalString) << endl;

    return 0;
}

