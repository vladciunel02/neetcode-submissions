class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size() - 1;
        int maxRight = -1;
        for(int i = size; i >= 0; i--){
            int temp = maxRight;
            maxRight = max(maxRight, arr[i]);
            arr[i] = temp;
        }
        return arr;
    }
    
};