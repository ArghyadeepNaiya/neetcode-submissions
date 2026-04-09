class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int val=0;
        for(int left=0,right=1;right<prices.size();right++){
            if(prices[right]-prices[left]>0){
                val=max(val,(prices[right]-prices[left]));
                continue;
            }
            left=right;
        }
        return val;
    }
};
