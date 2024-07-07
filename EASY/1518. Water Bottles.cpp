class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        int empty = numBottles;
        while(empty >= numExchange){
            int news = empty / numExchange;
            total = total + news;
            empty = empty % numExchange + news;
        }
        return total;
    }
};