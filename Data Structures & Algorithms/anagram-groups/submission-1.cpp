class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ang;
        unordered_map<string,vector<string>> map;
        for(auto s: strs){
            string key=s;
            sort(key.begin(),key.end());
            map[key].push_back(s);
        }
        for(auto& pair : map){
            ang.push_back(pair.second);
        }
        return ang;
    }

};
