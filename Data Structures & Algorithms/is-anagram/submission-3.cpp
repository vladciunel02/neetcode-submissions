class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char, int> firstString;
        int length_1 = s.length();

        unordered_map<char, int> secondString;
        int length_2 = t.length();

        if(length_1 != length_2){
            return false;
        }

        for(int i = 0; i < length_1; i++){
            firstString[s[i]]++;
        }
         for(int i = 0; i < length_2; i++){
            secondString[t[i]]++;
        }
        bool validAnagram = false;
        if(firstString == secondString){
            validAnagram = true;
        }
        return validAnagram;
    }
};
