#include <iostream>

using namespace std;

int Digital_root(int n) {

    int Remainder, sum = 0;

    while(n != 0) {

        Remainder = n % 10;
        n = n / 10;
        sum += Remainder;
    }

    return (sum >= 10) ? Digital_root(sum) : sum;
}

int main() {

    int Number;

    cout << "Enter a Number ? ";
    cin >> Number;
    
    cout << "Digital root of " << Number << " is " << Digital_root(Number) << endl;

    return 0;
}