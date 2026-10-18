class Solution {
public:
    int findMin(vector<int> &nums) {
        int st = 0;
        int dr = nums.size() - 1    ;
        int minValue = INT_MAX;
        while(st < dr){
            int mid = st + (dr - st) / 2;
            if(nums[mid] < minValue){
                minValue = nums[mid];
            }
            if(nums[mid] < nums[dr]){
                dr = mid;
            }
            else if(nums[mid] > nums[dr]){
                st = mid + 1;
            }
        }
        if(nums[st] < minValue){
                minValue = nums[st];
            }
        return minValue;
    }
};
