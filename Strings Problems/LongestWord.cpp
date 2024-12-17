#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

string RemovePunct(string str) {

  string Newstr;

  for (short i = 0; i < str.length(); i++) {

    if (!ispunct(str[i])) {

      Newstr += str[i];
    }
  }
  return Newstr;
}

vector <string> split(string str) {

  string word = "";
  short pos = 0;
  string Delim = " ";
  vector <string> vstr;

  while ((pos = str.find(Delim)) != str.npos) {

    word = str.substr(0, pos);
    if (word != "") {
      
      word = RemovePunct(word);
      vstr.push_back(word);

    }
    str.erase(0, pos + Delim.length());
  }
  if (str != "") {

    str = RemovePunct(str);
    vstr.push_back(str);

  }
  return vstr;
}

string LongestWord(string str) {
  
  vector <string> vstr = split(str);

  string longword;

  longword = vstr[0];

  for (string& str : vstr) {

    if (longword.length() < str.length()) {

      longword = str;

    }
  }

  return longword;
}

int main(void) { 
   
  // keep this function call here
  cout << LongestWord("hi how are you,,,,,");

  return 0;
    
}
