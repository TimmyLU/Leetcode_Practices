class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 1){
            return 1;
        }
        vector<char>ans;
        int left = 0;
        int count = 1;
        for(int right = 1;right < chars.size();right++){
            if(chars[left] != chars[right]){
                ans.push_back(chars[left]);
                if(count > 1){
                    string cou = to_string(count);
                    for(char c : cou){
                        ans.push_back(c);
                    }
                }
                //string cou = to_string(count);
                //ans.push_back(cou);
                left = right;
                count = 1;
            }else if(chars[left] == chars[right]){
                count++;
            }
        }
        //last
        ans.push_back(chars[left]);
        if(count > 1){
            string cou = to_string(count);
            for(char c : cou){
                ans.push_back(c);
            }
            //ans.push_back(cou);
        }
        for(int i = 0;i < ans.size();i++){
            chars[i] = ans[i];
        }
        return ans.size();
    }
};