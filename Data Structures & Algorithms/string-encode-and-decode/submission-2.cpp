class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(const auto& s : strs){
            string leng = to_string(s.length());
            result += leng + "#" + s;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        int n = s.length();
        while(i < n){
            int j = s.find('#', i);
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        return result;
    }
};
