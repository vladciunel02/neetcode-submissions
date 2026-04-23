class Solution {
public:
    int maxArea(vector<int>& heights) {
        if(heights.empty()){
            return 0;
        }
        int st = 0;
        int dr = heights.size() - 1;
        int maxA = INT_MIN;
        while(st < dr){
            int curent = (dr - st) * min(heights[st],heights[dr]);
            if(curent > maxA){
                maxA = curent;
            }
            if(heights[st] < heights[dr])
                st++;
            else if(heights[st] > heights[dr])
                dr--;
            else
                st++;
        }
        return maxA;
    }
};
