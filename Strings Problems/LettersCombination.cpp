#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

vector<string> letterCombinations(string digits) {

    map <string, string> Letters;

    Letters["2"] = "abc";
    Letters["3"] = "def";
    Letters["4"] = "ghi";
    Letters["5"] = "jkl";
    Letters["6"] = "mno";
    Letters["7"] = "pqrs";
    Letters["8"] = "tuv";
    Letters["9"] = "wxyz";
    
    vector <string> vCombinations;

    if (digits.empty()) {

        return vCombinations;
    }

    if (digits.length() == 1) {
        
        for (char &c : Letters[digits]) {

            string s;
            s = c;
            vCombinations.push_back(s);
        }
        return vCombinations;
    }

}

int main() {

    vector <string> vCombinations = letterCombinations("2");

    for (string &s : vCombinations) {

        cout << s << endl;
    }

    return 0;
}