class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int drinkedBottles = numBottles;
        while(numBottles>=numExchange){
            drinkedBottles++;
            numBottles = numBottles- numExchange+1;
            numExchange++;
        }
        return drinkedBottles;
    }
};