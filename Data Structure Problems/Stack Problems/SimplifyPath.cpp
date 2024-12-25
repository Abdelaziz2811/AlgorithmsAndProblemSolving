#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

vector <string> Split(string str, string Delim) {

    short pos;
    string word;
    vector <string> vWords;

    while ((pos = str.find(Delim)) != str.npos) {

        word = str.substr(0, pos);
        if (word != "") {

            vWords.push_back(word);
        }
        str.erase(0, pos + Delim.length());
    }
    if (str != "") {

        vWords.push_back(str);
    }
    return vWords;
}

string simplifyPath(string path) {

    stack <string> stc;
    stack <string> stc2;
    int DotPos = -1;
    string SimplifyPath;

    vector <string> vPaths = Split(path, "/");

    for (string& Path : vPaths) {

        if (Path != ".." && Path != ".")
            stc.push(Path);

        if (Path == ".." && !stc.empty()) {

            stc.pop();
        }
    }

    while (!stc.empty()) {

        stc2.push(stc.top());
        stc.pop();
    }
    while (!stc2.empty()) {

        SimplifyPath += "/";
        SimplifyPath += stc2.top();

        stc2.pop();
    }
    
    if (SimplifyPath == "")
        SimplifyPath = "/";

    return SimplifyPath;
}

int main() {
    
    cout << "SimplifyPath : "<< simplifyPath("/a/./b/../c/") << endl;

    return 0;
}