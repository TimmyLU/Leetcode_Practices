class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int>count;
        vector<int>numofcount;
        int sum = 0;
        int cost = 1;
        for(int i = 0;i < word.length();i++){
            count[word[i]]++;
        }
        for(auto pair : count){
            numofcount.push_back(pair.second);
        }
        sort(numofcount.rbegin(), numofcount.rend());
        for(int j = 0;j < numofcount.size();j++){
            if(j % 8 == 0 && j != 0){
                cost++;
            }
            sum = sum + (numofcount[j] * cost);
        }
        return sum;
    }
};