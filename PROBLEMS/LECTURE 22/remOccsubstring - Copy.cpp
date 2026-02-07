this 1st one is more efficient  
npos== not found ;


class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (s.find(part) != string::npos) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()!=0 && s.find(part)<=s.length()){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};