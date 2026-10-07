class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.empty()){
            return 0;
        }
        int maxS = INT_MIN;
        int st = 0;
        int dr = heights.size() - 1;
        while(st < dr){
            int current = (dr - st) * min(heights[st], heights[dr]);
            if(current > maxS){
                maxS = current;
            }
            if(heights[st] < heights[dr]){
                st++;
            }
            else{
                dr--;
            }
        }
        return maxS;
    }
};
