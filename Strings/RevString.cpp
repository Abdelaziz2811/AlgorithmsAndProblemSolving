#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
  
  string RevStr;

  for (short i = str.length() - 1; i >= 0; i--) {

  RevStr += str[i]; 

  } 
  return RevStr;

}

int main(void) { 
   
  
  cout << FirstReverse("Hi, how are you");
  
  return 0;
}    

