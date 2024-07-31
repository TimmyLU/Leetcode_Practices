class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int start = 0;
        int highest = 0;
        for(int i = 0;i < gain.size();i++){
            start = start + gain[i];
            highest = max(highest, start);
        }
        return highest;
    }
};