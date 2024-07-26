class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0;
        int y = 0;
        for(char a : moves){
            if(a == 'U'){
                y += 1;
            }else if(a == 'D'){
                y -= 1;
            }else if(a == 'R'){
                x += 1;
            }else if(a == 'L'){
                x -= 1;
            }
        }
        return (x == 0) && (y == 0);
    }
};