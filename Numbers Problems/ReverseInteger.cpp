#include <iostream>

using namespace std;

int reverse(int x) {

    int remainder = 0;
    int revnum = 0;

    while (x != 0)
    {
        remainder = x % 10;
        x = x / 10;

        if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10)
            return 0;

        revnum = revnum * 10 + remainder;
    }

    return revnum;
}

int main() {

    cout << "Case 1 :"<<endl;
    cout << reverse(123) << endl;

    cout << "Case 2 :"<<endl;
    cout << reverse(-123) << endl;

    cout << "Case 3 :"<<endl;
    cout << reverse(12087) << endl;

    return 0;
}