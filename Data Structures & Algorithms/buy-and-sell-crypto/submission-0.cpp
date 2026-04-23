class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int minimLeft = prices[0];
        int profit = 0;
        int maxProfit = 0;
        for(int i = 1 ; i < size ; i++){
            profit = prices[i] - minimLeft;
            if(profit > maxProfit)
                maxProfit = profit;
            if(prices[i] < minimLeft )
                minimLeft = prices[i];
        }
        return maxProfit;

    }
};
