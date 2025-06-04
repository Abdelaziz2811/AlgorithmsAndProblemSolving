#include <iostream>
#include <queue>
#include <string>

using namespace std;

// function declaration
int firstUniqChar(string);

int main() {

    cout << firstUniqChar << endl;
    
    return 0;
}
// function definition
int firstUniqChar(string s) {
        
        char FirstChar = s[0];
        int charCounter = 0;

        queue <char> UniqChar;

        for (char& c : s) {

            UniqChar.push(c);
        }

        char Lastchar;

        while (!UniqChar.empty()) {

            if ((Lastchar = UniqChar.front()) == FirstChar) {

                charCounter++;
            }
            UniqChar.pop();
            if (Lastchar == UniqChar.front() && UniqChar.front() == FirstChar)
                return -1;
        }

        return (charCounter == 1) ? 0 : charCounter;
    }