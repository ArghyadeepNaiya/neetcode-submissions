class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> solution;
        for(int i=0;i<=n;i++){
            int counter=0;
            int j=i;
            while(j>0){
                counter+= j&1;
                j>>=1;
            }
            solution.push_back(counter);
        }
        return solution;
    }
};
