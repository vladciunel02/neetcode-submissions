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
        if(s.empty()){
            return {};
        }
        int i = 0;
        while(i < s.length()){
            string number;
            while(s[i] != '#'){
                number +=s[i++];
            }
            i++;
            int nmb = stoi(number);
            string temp;
            for(int k = 0; k < nmb; k++){
                temp += s[i + k];
            }
            i += nmb;
            result.push_back(temp);
        }
        return result;
    }
};
