class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        int size = nums.size();
        int maxSum = nums[0];
        int currSum = nums[0];
        for(int i = 1; i < size; i++){
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }

};
