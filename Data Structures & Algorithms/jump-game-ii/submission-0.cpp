class Solution {
public:
    int jump(vector<int>& nums) {
        int size = nums.size();
        int jumps = 0 ;
        int currentEnd = 0, farthest = 0;
        for(int i = 0 ; i < size - 1; i++){
            farthest = max(farthest, i + nums[i]);
            if(i == currentEnd){
                jumps++;
                currentEnd = farthest;
            }
        }
        return jumps;
    }
};
