class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length() - 1;
        int i = size;
        while(s[i] == ' '){
            i--;
        }
        int wordLen = 0;
        while(s[i] != ' ' && i >=0 ){
            wordLen++;
            i--;
        } 
        return wordLen;
    }
};