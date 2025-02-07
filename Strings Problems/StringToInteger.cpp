#include <iostream>
#include <string>

using namespace std;

int myAtoi(string s) {
        
    if (s[0] > 57 || s[0] < 48 && s[0] != ' ' && s[0] != '-')
        return 0;

    string Number;

    for (short i = 0; i < s.length(); i++) {

        if ((s[i] <= 57 && s[i] >= 48) || s[i] == 45) 
            Number+= s[i];
        else if (Number != "")
            break;
    }

    int Number0 = stoi(Number);

    if (Number[0] == '-') {
        Number = Number.substr(1, Number.length() - 1);
        Number0 = stoi(Number) * -1;
    }

    return Number0;
}

int main() {

    cout << "Case 1 :" << endl;
    cout << myAtoi("42") << endl;
    
    cout << "Case 2 :" << endl;
    cout << myAtoi("   -42") << endl;

    cout << "Case 3 :" << endl;
    cout << myAtoi("4193 with words") << endl;

    cout << "Case 4 :" << endl;
    cout << myAtoi("words and 987") << endl;

    return 0;
}