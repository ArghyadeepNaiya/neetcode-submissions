class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        bool dup2=false;
        for(int i=0;i<nums.size();i++){
            if(map.contains(nums[i])){
                int val=abs(i-map[nums[i]]);
                if(val<=k) dup2=true;
            }
            map[nums[i]]=i;
        }
        return dup2;
    }
};