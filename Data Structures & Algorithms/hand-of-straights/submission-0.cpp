class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.empty())
            return false;
        if(hand.size() % groupSize != 0)
            return false;
        sort(hand.begin(),hand.end());
        map<int,int> freq;
        for(int i = 0; i < hand.size(); i++){
            freq[hand[i]]++;
        }
        while(!freq.empty()){
            auto [minVal, minFreq] = *freq.begin();
            for(int i = 0; i < groupSize; i++){
                if(freq[minVal + i] == 0){
                    return false;
                }
                freq[minVal + i]--;
                if(freq[minVal + i] == 0)
                    freq.erase(minVal + i);
            }
        }
        return true;
    }
};
