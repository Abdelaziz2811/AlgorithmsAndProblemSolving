#include <iostream>
#include <string>

using namespace std;

bool IsExistInSubstr(string s, char c) {

    for (short i = 0; i < s.length(); i++) {

        if (s[i] == c)
            return true;
    }
    return false;
}

int lengthOfLongestSubstring(string s) {
    
    string LongestSubstr;
    for (short i = 0; i < s.length(); i++) {

        if (!IsExistInSubstr(LongestSubstr, s[i]))
            LongestSubstr += s[i];
        else break;
    }
    return LongestSubstr.length();
}

int main() {

    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl;

    return 0;
}