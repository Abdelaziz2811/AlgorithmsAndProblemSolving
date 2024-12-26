#include <iostream>

using namespace std;

bool isPalindrome(int x) {

        int Number = x;
        int Remainder = 0;
        int RevNumber = 0;

        while (x != 0) {

            Remainder = x % 10;
            x = x / 10;            
            RevNumber = RevNumber * 10 + Remainder;
        }

        return RevNumber == Number;
}

int main() {

    cout << isPalindrome(121) << endl;

    return 0;
}