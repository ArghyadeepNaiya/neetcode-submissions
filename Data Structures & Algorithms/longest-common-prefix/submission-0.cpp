class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
        string lcp=strs[0];
        for(int i=1;i<strs.size();i++){
            string nstrs=strs[i];
            string rem;
            for(int j=0;j<nstrs.length();j++){
                if(nstrs[j]==lcp[j]){
                    rem.push_back(lcp[j]);
                }
                else break;
            }
            if(rem<=lcp) lcp=rem;
        }
        return lcp;
    }
};