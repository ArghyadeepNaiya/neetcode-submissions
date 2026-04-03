class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val=0;
        for(int n: nums){
            val^=n;
        }
        return val;
    }
};
