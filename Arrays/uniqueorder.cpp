#include <iostream>
#include <vector>

using namespace std;

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  
  std::vector<T> vuniqueOrd;

  vuniqueOrd.push_back(iterable[0]);

  for (short i = 1; i < iterable.size(); i++) {
    
    if (vuniqueOrd[vuniqueOrd.size() - 1] != iterable[i]) {
      
      vuniqueOrd.push_back(iterable[i]);
    }
  }
  return vuniqueOrd;
}

std::vector<char> uniqueInOrder(const std::string& iterable){
  
  std::vector<char> vuniqueOrd;

  vuniqueOrd.push_back(iterable[0]);

  for (short i = 1; i < iterable.length(); i++) {
    
    if (vuniqueOrd[vuniqueOrd.size() - 1] != iterable[i]) {
      
      vuniqueOrd.push_back(iterable[i]);
    }
  }
  return vuniqueOrd;
}

int main() { 

    vector <char> vuniqueOrd = uniqueInOrder("AAABCBBBCCDDD");

    for (char c : vuniqueOrd){

        cout << c << " ";
    }

    cout << "\n";
    
    vector <short> vNumbers = { 1,1,1,2,3,3,3,2,2,4,4 };
    vector <short> vshortUOrd = uniqueInOrder(vNumbers);

    for (short& Number : vshortUOrd) {

        cout << Number << " ";
    }

    return 0;
}