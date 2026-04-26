class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills.empty())
            return false;
        int size = bills.size();
        unordered_map<int, int> money;
        int currentBills = 0, lemonadePrice = 5, moneyLeft = 0;
        for(int i = 0; i < size; i++){
            money[bills[i]]++;
            if(bills[i] == 5)
                continue;
            if(bills[i] == 10){
                if(money[5] == 0)
                    return false;
                money[5]--;
            }

            if(bills[i] == 20){
               if(money[10] > 0 && money[5] > 0){
                    money[10]--;
                    money[5]--;
               }
               else if(money[5] >= 3){
                money[5] -= 3;
               }
               else{
                return false;
               }
            }
        }
        return true;
    }
};