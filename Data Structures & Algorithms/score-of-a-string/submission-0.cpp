class Solution {
public:
    int scoreOfString(string s) {
        vector<int> asci(s.length());
        for(int i = 0; i < s.length(); i++){
            asci[i] = static_cast<int>(s[i]);
        }
        int sum = 0;
        for(int i = 0; i < s.length() - 1; i++){
            sum += abs(asci[i] - asci[i+1]);
        }
        return sum;
    }
};