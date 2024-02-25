class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (!prices.size()) return 0;
        int min = prices[0];
        int profit = 0;
        for (int todayPrice : prices) {
            if (todayPrice < min) min = todayPrice;                     //change min if new min found
            if (todayPrice - min > profit) profit = todayPrice - min;   //maximize profit
        }
        return profit;
    }
};
