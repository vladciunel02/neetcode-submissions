class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(auto numar : nums){
            freq[numar]++;
        }
        vector<vector<int>> buckets(n + 1);
        for(auto &[numar, frecventa] : freq){
            buckets[frecventa].push_back(numar);
        }
        vector<int> result;
        for(int i = n; i >= 1; i--){
            for(int numar : buckets[i]){
                result.push_back(numar);
            }
            if(result.size() == k)
                return result;
        }
        return {};
    }
};
