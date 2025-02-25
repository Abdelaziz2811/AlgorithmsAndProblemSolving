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

    for (short i = stoi(to_string(digits[0])); i < stoi(to_string(digits[digits.length() - 1])) - 1; i++) {

        if (digits.length() > 1) {
            
            for(char C_1 : keypad[i]) {

                for (char C_2 : keypad[i + 1]) {

                    letterCombination = C_1 + C_2;
                    Combination.push_back(letterCombination);
                }
            }
        }
    }

    return Combination;
}

int main() {

    string digits = "23";
    vector<string> Combination = letterCombinations(digits);
    
    for(string& s : Combination) {
        cout << s << " ";
    }

    return 0;
}