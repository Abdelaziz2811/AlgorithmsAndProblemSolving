#include <iostream>
#include <string>

using namespace std;

string multiply(string num1, string num2) {
     
    return to_string(stol(num1) * stol(num2));
}

int main() {

    string num1 = "2", num2 = "3";

    cout <<"Test case 1: " << endl;
    cout << multiply(num1, num2) << endl;

    num1 = "123", num2 = "456";

    cout <<"Test case 2: " << endl;
    cout << multiply(num1, num2) << endl;

    return 0;
}