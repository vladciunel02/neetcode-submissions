class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(int i = 0 ; i < strs.size(); i++){
            result = result + to_string(strs[i].length()) + "#" + strs[i];
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        for(int i = 0; i < s.length(); i++){
            int size = 0;
            string number = "";
            while(isdigit(s[i])){
                number = number + s[i];
                i++;
            }
            result.push_back(s.substr(i+1,stoi(number)));
            i = i +stoi(number);
        }
        return result;
    }
};
