class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int st = i + 1;
            int dr = nums.size() - 1;
            while(st < dr){
                if(nums[st] + nums[dr] == -nums[i]){
                    result.push_back({nums[i],nums[st],nums[dr]});
                    st++;
                    dr--;
                    while(st < dr && nums[st] == nums[st - 1]){
                        st++;
                    }
                    while(st < dr && nums[dr] == nums[dr + 1]){
                        dr--;
                    }
                }
                else if(nums[st] + nums[dr] < -nums[i]){
                        st++;
                }
                else{
                    dr--;
                }
            }
        }
        return result;
    }
};
