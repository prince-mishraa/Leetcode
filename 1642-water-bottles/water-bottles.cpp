class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full = numBottles;
        int empty = 0;
        int count = 0;

        while(full > 0){
            count += full;
            empty += full;
            full = 0;

            full = empty/numExchange;
            empty = empty%numExchange;
        }
        return count;
    }
};