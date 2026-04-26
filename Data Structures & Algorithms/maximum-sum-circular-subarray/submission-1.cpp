class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int currMax = 0, currMin = 0, maxSum = INT_MIN, sum = 0,minSum = INT_MAX;
        for(int el : nums){
            sum += el;
            currMax = max(currMax + el, el);
            maxSum = max(maxSum, currMax);
            currMin = min(currMin + el, el);
            minSum = min(minSum, currMin);
        }
        if(maxSum < 0)
            return maxSum;
        return max(maxSum, sum - minSum);
    }
};