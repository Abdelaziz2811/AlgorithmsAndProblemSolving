#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  
  int Factorial = 1;

  for (short i = num; i >= 1; i--) {

    Factorial = Factorial * i;
  }

  return Factorial;
}

// using recursion 

int Factorial(int n) {

  if (n == 1) {

    return 1;
  }
  return n * Factorial(n - 1);
}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(5);
  cout << endl;
  cout << Factorial(5);

  return 0;
}
    

