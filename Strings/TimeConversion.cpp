#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> SplitString(string Line, string Seperator) {

    vector <string> vDate;
    short pos = 0;
    string word = "";

    while ((pos = Line.find(Seperator)) != Line.npos) {

        word = Line.substr(0, pos);
        if (word != "") {

            vDate.push_back(word);
        }
        Line.erase(0, pos + Seperator.length());
    }
    if (Line != "") {

        vDate.push_back(Line);
    }
    return vDate;
}

string timeConversion(string s) {

    vector <string> vDate;
    
    string Date[]{"","13","14","15","16","17","18","19","20","21","22","23"};
    
    if(s.find("PM") != s.npos) {
        
        vDate = SplitString(s,":");
        if (vDate[0] == "12") {
        
               return s.substr(0, 8); 
        }
        
        return Date[stoi(vDate[0])] + ":" + vDate[1] + ":" + vDate[2].substr(0,2);
    }
    
    if (s.find("AM") != s.npos) {
        
        vDate = SplitString(s,":");
        if (vDate[0] == "12") {
            
            return "00:"+ vDate[1] + ":" + vDate[2].substr(0, 2);
        }
        else {

            return vDate[0] + ":" + vDate[1] + ":" + vDate[2].substr(0, 2);
        }
    }
}

int main () {

    cout << timeConversion("6:01:00PM");

    return 0;
}