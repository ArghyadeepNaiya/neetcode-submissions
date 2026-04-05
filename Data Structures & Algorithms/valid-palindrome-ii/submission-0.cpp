class Solution {
public:
bool palindrome(string s,int left, int right){
    while(left<right){
        if(s[left]!=s[right]){
            return false;
            break;
        }
        left++;
        right--;
    }
    return true;
}
bool validPalindrome(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return (palindrome(s,left+1,right)|| palindrome(s,left,right-1));
            break;
        }
        left++;
        right--;
    }
    return true;
}
};