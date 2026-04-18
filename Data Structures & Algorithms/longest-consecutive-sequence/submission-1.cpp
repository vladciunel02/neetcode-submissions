class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int maxL = 0;
        for(int i = 0; i < nums.size(); i++){
            seen.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(seen.count(nums[i] - 1) == 0){
                int k = 1;
                int length = 1;
                while(seen.count(nums[i] + k)){
                    k++;
                    length++;
                }
                if(length > maxL)
                    maxL = length;
            }
        }
        return maxL;
    }
};
