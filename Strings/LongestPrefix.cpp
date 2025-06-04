#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        
    if (strs.empty()) return "";

    char c;

    for (short i = 0; i < strs[0].length(); i++) {
        
        c = strs[0][i];

        for (short j = 0; j < strs.size(); j++) {

            if (i > strs[j].length() || c != strs[j][i])
                return strs[0].substr(0, i);
        }
    }

    return strs[0];
}

int main() {

    cout << "Case 1 :" << endl;
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
    
    cout << "Case 2 :" << endl;
    strs = {"flower", "flow", "flow"};
    cout << longestCommonPrefix(strs);

    cout << "Case 3 :" << endl;
    strs = {"Bird", "Rabbit", "Turtle"};
    cout << longestCommonPrefix(strs);

    return 0;
}