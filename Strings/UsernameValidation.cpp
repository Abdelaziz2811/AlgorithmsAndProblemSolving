#include <iostream>
#include <string>

using namespace std;

string CodelandUsernameValidation(string str) {
  
    if (str == "" || str.length() < 4 || str.length() > 25 ){

        return "false";
    
    }

    if (str[0] == '_' || str[str.length() - 1] == '_'){

      return "false";

    }

    for (short i = 0; i < str.length(); i++) {
   
      if (str[i] >= 48 && str[i] <= 122) {

        if (str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 94 || str[i] == 96) {

          return "false";

        }

      }
      else {

        return "false";

      }

    }

      return "true";
}
int main(void) { 
   
  cout << CodelandUsernameValidation("Ab_23h");

  return 0;
    
}
