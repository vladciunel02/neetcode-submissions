class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        int vectorSize = nums.size();
        if(vectorSize == 0 || vectorSize == 1) {
            return false;
        }
        for(int i = 0; i < vectorSize; i++){
            if(freq.contains(nums[i])){
                return true;
            }
            else{
                freq.insert(nums[i]);
            }
        }
        return false;
    }
};