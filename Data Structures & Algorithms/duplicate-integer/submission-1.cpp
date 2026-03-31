class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int left=0;
        int k=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[left]){
                k++;
                return k;
                break;
            }
            else left++;
        }
        return k;
    }
};