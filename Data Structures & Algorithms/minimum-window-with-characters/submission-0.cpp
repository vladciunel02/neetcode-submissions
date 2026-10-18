class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int missing = t.length();
        unordered_map<char, int> need;
        for(int i = 0; i < missing; i++){
            need[t[i]]++;
        }
        int st = 0, bestStart = 0, bestLen  = INT_MAX;
        for(int dr = 0; dr < n; dr++){
            need[s[dr]]--;
            if(need[s[dr]]  >= 0){
                missing--;
            }
            while(missing == 0){
                 if (dr - st + 1 < bestLen) {
                bestLen = dr - st + 1;
                bestStart = st;
                }
                need[s[st]]++;
                if(need[s[st]] > 0){
                    missing++;
                }
                st++;
                
            }
        }
    return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};
