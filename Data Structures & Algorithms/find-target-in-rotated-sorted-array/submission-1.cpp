class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, dr = nums.size() - 1;
        while(st <= dr){
            int mid = st + (dr - st) / 2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < nums[dr]){
                if(nums[mid] < target && target <= nums[dr]){
                    st = mid + 1;
                }
                else{
                    dr = mid - 1;
                }
            }
            else{
                if(nums[mid] > target && target >= nums[st]){
                    dr = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
        }
        return -1;
    }
};
