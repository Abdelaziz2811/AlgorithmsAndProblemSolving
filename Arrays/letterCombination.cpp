#include <vector>
#include <string>

using namespace std;

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};

    const vector<string> keypad {
        "", "", "abc", "def",
        "ghi", "jkl", "mno",
        "pqrs", "tuv", "wxyz"
    };

    vector<string> result;
    result.push_back("");

    for (char digit : digits) {
        int num = digit - '0';
        if (num < 0 || num > 9) continue;

        const string& candidates = keypad[num];
        if (candidates.empty()) continue;

        vector<string> temp;
        for (const string& combination : result) {
            for (char letter : candidates) {
                temp.push_back(combination + letter);
            }
        }
        result.swap(temp);
    }

    return result;
}

int main() {

    string digits = "23";
    vector<string> Combination = letterCombinations(digits);
    
    for(string& s : Combination) {
        cout << s << " ";
    }

    return 0;
}