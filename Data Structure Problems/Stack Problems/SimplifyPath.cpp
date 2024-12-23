#include <iostream>
#include <string>
#include <stack>

using namespace std;

    string simplifyPath(string path) {

        stack <char> stc;
        stack <char> stc2;
        int DotPos = -1;
        string SimplifyPath = "/";

        for (short i = 0; i < path.length(); i++) {

            if (path[i] != '/' && path[i] != '.') {

                stc.push(path[i]);
            }
            if (path[i] == '.') {

                if (DotPos == i - 1 && !stc.empty()) {

                    stc.pop();
                }
                DotPos = i;
            }
        }
        while (!stc.empty()) {

            stc2.push(stc.top());
            stc.pop();
        }
        while (!stc2.empty()) {

                SimplifyPath += stc2.top();
                SimplifyPath += "/";
                stc2.pop();
        }
        return SimplifyPath.substr(0, SimplifyPath.length() - 1);
    }

int main() {
    
    cout << "SimplifyPath : "<< simplifyPath("/a/./b/../c/") << endl;

    return 0;
}