class Solution {
public:
    int characterReplacement(string s, int k) {
        int st = 0, dr = 0;
        unordered_map<char,int> freq;
        int maxFreq = 0;
        int maxL = 0;
        while(dr < s.length()){
            freq[s[dr]]++;
            maxFreq = max(maxFreq, freq[s[dr]]);
            int needChanges = (dr - st + 1) - maxFreq;
            if(needChanges <= k){
                maxL = dr - st + 1;
            }
            else{
                freq[s[st]]--;
                st++;
            }
            dr++;
        }
        return maxL;
    }
};
