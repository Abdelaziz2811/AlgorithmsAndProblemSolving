#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        // Write a function to find the longest common prefix string amongst an array of strings.
        // If there is no common prefix, return an empty string "".

        string prefix = "";
        int i = 0;
        char c;

        while (true) {
            
            if (strs.size() == 0) {
                
                return prefix;
            }
            
            c = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                
                if (strs[j][i] != c) {
                    
                    return prefix;
                }
            } 
            prefix += c;
            i++;    
        }
    }
};

int main() {
    
    vector <string> vstr = {"flower", "flow", "flight"};

    Solution s;

    cout << s.longestCommonPrefix(vstr) << endl;

    return 0;
}