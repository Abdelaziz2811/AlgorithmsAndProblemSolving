#include <iostream>

using namespace std;

string mergeAlternately(string word1, string word2) {
        
    int Length = 0;
    string MergedWord = "";

    (word1.length() > word2.length()) ? Length = word1.length() : Length = word2.length();

    for (short i = 0; i < Length; i++) {

        if (i < word1.length())
            MergedWord += word1[i];
            
        if (i < word2.length())
            MergedWord += word2[i];
    }

    return MergedWord;
}

int main() {

    string word1, word2;

    cout << "Case 1 :";
    
    word1 = "abc";
    word2 = "pqr";
    
    cout << mergeAlternately(word1, word2) << endl;

    cout << "Case 2 :";

    word1 = "ab";
    word2 = "hello";

    cout << mergeAlternately(word1, word2) << endl;

    return 0;
}