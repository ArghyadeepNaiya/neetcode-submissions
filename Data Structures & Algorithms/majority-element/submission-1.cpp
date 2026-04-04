class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto i: nums){
            map[i]++;
        }
        int gmax=0;
        int num=0;
        for(auto& pair: map){
            if( pair.second>gmax){
                num=pair.first;
                gmax=pair.second;
            }
        }
        if(gmax>nums.size()/2) return num;
        else return 0;
    }
};