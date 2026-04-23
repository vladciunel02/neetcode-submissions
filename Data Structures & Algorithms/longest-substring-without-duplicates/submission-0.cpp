class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st = 0, dr = 0;
        int lMax = 0;
        unordered_set<char> ap;
        while(dr < s.length()){
            if(ap.count(s[dr])){
                while(ap.count(s[dr])){
                    ap.erase(s[st]);
                    st++;
                }
            }
            else{
                ap.insert(s[dr]);
                if(dr - st + 1 > lMax)
                    lMax = dr - st + 1;
                dr++;
            }
        }
        return lMax;
    }
};
