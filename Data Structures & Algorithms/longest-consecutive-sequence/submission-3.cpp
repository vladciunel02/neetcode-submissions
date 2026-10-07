class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> freq;
        if(nums.empty()){
            return 0;
        }
        int n = nums.size();
        for(int i = 0; i < n; i++){
            freq[nums[i]]++;
        }
        int maxim = 1;
        for(int i = 0; i < n; i++){
            if(freq.find(nums[i] - 1) == freq.end() && freq.find(nums[i]) != freq.end()){
                int k = 1;
                while(freq.find(nums[i] + k) != freq.end()){
                    k++;
                }
                if(k > maxim){
                    maxim = k;
                }
            }
        }
        return maxim;
    }
};
