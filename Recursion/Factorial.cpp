#include <iostream>
#include <string>
using namespace std;

int Factorial(int n) {

  if (n == 1) {

    return 1;
  }
  return n * Factorial(n - 1);
}

int main () {

    int Number = 4;
    cout << "Factorial of " << Number << " is : " << Factorial(Number);

    return 0;
}