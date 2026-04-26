class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s1 = 0, s2 = 0;
        for(int i = 0; i < gas.size(); i++){
            s1 += gas[i];
            s2 += cost[i];
        }
        if(s1 < s2){
            return -1;
        }
        int start = 0, tank = 0;
        for(int i = 0; i < gas.size(); i++){
            tank += gas[i];
            if(tank - cost[i] < 0){
                start = i + 1;
                tank = 0;
            }
            else{
                tank -= cost[i];
            }
        }
        return start;

    }
};
