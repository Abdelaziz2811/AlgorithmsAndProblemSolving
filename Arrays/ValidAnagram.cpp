#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <char> Split(string s)
{
    vector <char> result;
    for (int i = 0; i < s.size(); i++)
    {
        result.push_back(s[i]);
    }
    return result;
}

bool IssLExistIntL(char sL, vector <char>& sLetters)
{
    for (auto sLetter = sLetters.begin() ; sLetter != sLetters.end(); sLetter++)
    {
        if (sL == *sLetter)
        {
            sLetters.erase(sLetter);
            return true;
        }
    }
    return false;
}   

bool IsAnagram(string s, string t) {
    
    if (s.length() != t.length()) return false;

    vector <char> sLetters = Split(s);
    for (int i = 0; i < t.length(); i++)
    {
        if (!IssLExistIntL(t[i], sLetters)) return false;
    }
    return true;
}

int main()
{
    cout << "Case 1 : 'anagram', 'nagaram' :" << IsAnagram("anagram", "nagaram") << endl;
    cout << "Case 2 : 'rat', 'car' :" << IsAnagram("rat", "car") << endl;

    return 0;
}