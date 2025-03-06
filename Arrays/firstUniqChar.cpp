#include <iostream>
#include <string>

using namespace std;

int firstUniqChar(string s) {
    int index = -1;
    for (int i = 0; i < s.length(); i++) {
        for (int j = 0; j < s.length(); j++) {
            if (i != j && s[i] == s[j]) {
                index = -1;
                break;
            }
            else index = i;
        }
        if (index != -1)
            return index;
    }
    return index;
}

int main() {

    cout << firstUniqChar("loveleetcode") << endl;

    cout << firstUniqChar("leetcode") << endl;

    return 0;
}