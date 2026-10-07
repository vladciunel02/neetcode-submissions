class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int profit = 0;
        int currentMinimum = prices[0];
        for(int i = 1; i < n; i++){
            int currentProfit = prices[i] - currentMinimum;
            if(currentProfit > maxProfit){
                maxProfit = currentProfit;
            }
            if(currentMinimum > prices[i]){
                currentMinimum = prices[i];
            }
        }
        return maxProfit;
    }
};
