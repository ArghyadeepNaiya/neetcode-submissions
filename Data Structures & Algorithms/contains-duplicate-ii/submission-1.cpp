class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            if(map.contains(nums[i])){
                int val=abs(i-map[nums[i]]);
                if(val<=k) return true;
            }
            map[nums[i]]=i;
        }
        return false;
    }
};