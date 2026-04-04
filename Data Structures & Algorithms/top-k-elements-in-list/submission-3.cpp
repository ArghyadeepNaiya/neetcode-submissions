class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> map;
        // unordered_map <int,int> rev_map;
        vector<int> vec;
        vector<int> res;
        for(auto i : nums){
                map[i]++;
        }
        while(!map.empty()){
            int element;
            int value=-1;
            bool found=false;
            for(auto& pair: map){
                if(pair.second>value){
                    value=pair.second;
                    element=pair.first;
                    found =true;
                }
            }
            if(found){
                map.erase(element);
                found=false;
            }
            vec.push_back(element);
        }
        for(int i=0;i<k;i++){
            res.push_back(vec[i]);
        }
        return res;
    }
};