class Solution {
public:
    void reverseString(vector<char>& s) {
        int k=s.size()-1;
        for(int i=0;i<k;i++){
            char temp=s[i];
            s[i]=s[k];
            s[k]=temp;
            k--;
        }
        
    }
};