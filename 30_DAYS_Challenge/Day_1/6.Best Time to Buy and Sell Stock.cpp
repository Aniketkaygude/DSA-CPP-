class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi = INT_MIN;

        int buy=prices[0];

        for(int i=1;i<prices.size();i++){
           
         int diff = prices[i]-buy;
        buy = min(buy,prices[i]);
         maxi=max(diff,maxi);
          
        }
         return maxi<0?0:maxi;
    }
};