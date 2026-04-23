class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            unordered_map<char,int> freq_s1;
            unordered_map<char,int> freq_s2;
            for(int i = 0; i < s1.length(); i++){
                freq_s1[s1[i]]++;
            }
            for(int i = 0; i < s1.length(); i++){
                freq_s2[s2[i]]++;
            }
            if(freq_s1 == freq_s2)
                return true;
            int st = 0;
            int dr = s1.length();
        while(dr < s2.length()){
            freq_s2[s2[dr]]++;
            freq_s2[s2[st]]--;
            if(freq_s2[s2[st]] == 0)
                freq_s2.erase(s2[st]);
            st++;
            dr++;
            if(freq_s1 == freq_s2)
                return true;
        }
        return false;
    }
};
