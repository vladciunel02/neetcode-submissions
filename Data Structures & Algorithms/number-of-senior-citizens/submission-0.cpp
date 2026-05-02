class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++){
            int number;
            if(details[i].length() != 15)
                continue;
            else{
                number = stoi(details[i].substr(11,2));
            }
            if(number > 60)
                count++;
        }
        return count;
    }
};