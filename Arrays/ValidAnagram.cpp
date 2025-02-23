#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool IssLExistIntL(char tL, string& s) {

    for (auto sL = s.begin(); sL != s.end(); sL++) {
        if (tL == *sL) {
            s.erase(sL);
            return true;
        }
    }
    return false;
}

bool IsAnagram(string s, string t) {

    if (s.length() != t.length())
        return false;

    for (int i = 0; i < t.length(); i++) {
        if (!IssLExistIntL(t[i], s))
            return false;
    }
    return true;
}

int main()
{

    cout << "Case 1 : 'anagram', 'nagaram' :" << IsAnagram("anagram", "nagaram") << endl;
    cout << "Case 2 : 'rat', 'car' :" << IsAnagram("rat", "car") << endl;

    return 0;
}