class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int miniprice = INT_MAX;
        int maxprice = 0;

        for(int i = 0; i < n; i++){
            miniprice = min(miniprice, prices[i]);
            maxprice = max(maxprice,prices[i] - miniprice);
        }
        return maxprice;
    }
};