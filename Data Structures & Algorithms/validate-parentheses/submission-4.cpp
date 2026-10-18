class Solution {
public:
    bool isValid(string s) {
        if(s.empty()){
            return false;
        }
        vector<char> list;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                list.push_back(s[i]);
            }
            else{
                if(s[i] == ')'){
                    if(list.empty() == 0 && list.back() == '('){
                        list.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i] == ']'){
                    if(list.empty() == 0 && list.back() == '['){
                        list.pop_back();
                    }
                    else{
                        return false;
                    }
                }
                else if(s[i] == '}'){
                    if(list.empty() == 0 && list.back() == '{'){
                        list.pop_back();
                    }
                    else{
                        return false;
                    }
                }
            }

        }
        if(list.empty()){
            return true;
        }
        return false;
    }
};
