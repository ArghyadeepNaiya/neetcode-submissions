class Solution {
public:
    bool isAnagram(string s, string t) {
            vector<char> newChar1(s.begin(),s.end());
            vector<char> newChar2(t.begin(),t.end());
            sort(newChar1.begin(),newChar1.end());
            sort(newChar2.begin(),newChar2.end());
            return newChar1==newChar2;}
    
};
