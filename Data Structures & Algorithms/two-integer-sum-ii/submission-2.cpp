class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0;
        int dr = numbers.size() - 1;
        while(st < dr){
            if(numbers[st] + numbers[dr] == target)
                return{st + 1 ,dr + 1};
            else if(numbers[st] + numbers[dr] > target){
                dr--;
            }
            else if(numbers[st] + numbers[dr] < target){
                st++;
            }
        }
    }
};
