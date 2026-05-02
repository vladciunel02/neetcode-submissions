class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        while(i < s.length()){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        int changes = t.length() - j;
        return changes;
    }
};