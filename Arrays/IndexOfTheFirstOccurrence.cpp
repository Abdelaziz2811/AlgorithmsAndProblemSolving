#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle) {
    
    int Index = -1;
    string needle0;

    for (short i = 0; i < haystack.length(); i++) {

        if (needle[0] == haystack[i]) {

            Index = i;
            needle0 = haystack.substr(i, needle.length() + 1);
            if (needle == needle0)
                break;
            else 
            Index = -1;
        }
    }
    return Index;
}

int main() {

    string haystack = "hello", needle = "ll";

    cout <<"Test case 1: " << endl;
    cout << strStr(haystack, needle) << endl;

    haystack = "hello", needle = "lle";

    cout <<"Test case 2: " << endl;
    cout << strStr(haystack, needle) << endl;

    return 0;
}