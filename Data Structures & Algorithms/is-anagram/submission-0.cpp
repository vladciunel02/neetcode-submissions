class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> apS;
        unordered_map<char,int> apT;
        for(int i = 0; i < s.length(); i++){
            apS[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            apT[t[i]]++;
        }
        if(apS == apT)
            return true;
        return false;
    }
};
