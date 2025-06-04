#include <iostream>
#include <numeric>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    
    return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(str1.size(), str2.size())) : "";
}

int main() {
    
    string str1, str2;
    
    cout << "Case 1" << endl;
    str1 = "ABCD", str2 = "ABC";
    gcdOfStrings(str1, str2);

    cout << "Case 2" << endl;
    str1 = "Hello", str2 = "World";
    gcdOfStrings(str1, str2);

    return 0;
}