#include <iostream>
#include <string>
#include <stack>
#include <map>

using namespace std;

class Solution {

public:

static bool isValid(string s) {
        
        if (s.length() % 2 != 0)
            return false;

        stack <char> OpenParenthes;
        map <char, char> CloseParenthes;
        
        CloseParenthes[')'] = '(';
        CloseParenthes['}'] = '{';
        CloseParenthes[']'] = '[';

        for (short i = 0; i < s.length(); i++) {

            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {

                OpenParenthes.push(s[i]);
            }
            else {

                if (OpenParenthes.empty())
                    return false;

                if (OpenParenthes.top() != CloseParenthes[s[i]])
                    return false;
                
            }

            if (!OpenParenthes.empty()) {

                if (OpenParenthes.top() == CloseParenthes[s[i]]
                 || OpenParenthes.top() == CloseParenthes[s[i]]
                 || OpenParenthes.top() == CloseParenthes[s[i]]) {

                    OpenParenthes.pop();
                }
            }
        }
        return OpenParenthes.empty();
    }
};
int main() {

    cout << Solution::isValid("{][}");

    return 0;
}