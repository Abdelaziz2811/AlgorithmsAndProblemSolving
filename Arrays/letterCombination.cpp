#include <iostream>
#include <vector>

using namespace std;

vector<string> letterCombinations(string digits) {
        
    const vector<string> keypad {
        "", "", "abc","def",
        "ghi","jkl","mno",
        "pqrs","tuv","wxyz"
    };

    string letterCombination;
    vector<string> Combination;

    for (short i = stoi(to_string(digits[0])); i < stoi(to_string(digits[digits.length() - 1])); i++) {

        for (short j = 0; j < keypad[i].length(); j++) {

            if (digits.length() > 1) {
                
                Combination.push_back(letterCombination);
            }
            else Combination.push_back(keypad[j]);
        }
    }

    return Combination;
}

int main() {

    return 0;
}