class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxL = 0, currL = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                currL++;
            }
            else{
                if(maxL < currL){
                    maxL = currL;
                }
                currL = 0;
            }
        }
        if(maxL < currL){
                maxL = currL;
        }
        return maxL;
    }
};