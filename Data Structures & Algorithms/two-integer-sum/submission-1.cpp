class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> fval;

        for (int i = 0; i < nums.size(); i++) {
            int ctar = target - nums[i];
            
            
            if (map.find(ctar) != map.end()) {
                fval = {map[ctar], i};
                break;
            }
            
           
            map[nums[i]] = i; 
        }
        return fval;
    }
};
