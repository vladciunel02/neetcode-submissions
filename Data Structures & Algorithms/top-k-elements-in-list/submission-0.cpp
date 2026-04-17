class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> buckets(nums.size() + 1);
        unordered_map<int,int> freq;
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto &[cheie,valoare] : freq){
            buckets[valoare].push_back(cheie);
        }
        for(int i = buckets.size() - 1 ; i >= 0 && result.size() < k; i--){
            for(int num: buckets[i]){
                result.push_back(num);
            }
        }
        return result;
    }
};
