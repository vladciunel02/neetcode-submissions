class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string &s : strs){
            string cheie = s;
            sort(cheie.begin(), cheie.end());
            map[cheie].push_back(s);
        }
        vector<vector<string>> result;
        for(auto& [cheie,valoare] : map){
            result.push_back(valoare);
        }
        return result;
    }
};
