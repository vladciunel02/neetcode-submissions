class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;
        int dr = s.length() - 1;
    while(st < dr){
        if(!isalnum(s[st])){ 
        st++;
        }
        else if(!isalnum(s[dr])){ 
        dr--;
        }
        else{
        if(tolower(s[st]) != tolower(s[dr])) return false;
        st++;
        dr--;
        }
}
return true;
    }
};
