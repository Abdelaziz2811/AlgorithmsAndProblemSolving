#include <iostream>
#include <string>

using namespace std;

class Solution {

public:
    static bool isValid(string s) {
        
        short pos = 0;

        if ((pos = s.find(123) != s.npos)) {

            for (short i = pos; i < s.size(); i++) {

                if (s.find(125) == s.npos)
                    return false;
            }
        }
        else if ((pos = s.find(91) != s.npos)) {

            for (short i = pos; i < s.size(); i++) {

                if (s.find(93) == s.npos)
                    return false;
            }
        }
        else if ((pos = s.find(40) != s.npos)) {

            for (short i = pos; i < s.size(); i++) {

                if (s.find(41) == s.npos)
                    return false;
            }
        }

        return true;
    }
};
int main() {

    cout << Solution::isValid("()[]{}");

    return 0;
}