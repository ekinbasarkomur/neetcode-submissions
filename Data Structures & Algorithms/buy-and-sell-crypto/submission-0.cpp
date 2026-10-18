class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest_price = prices[0];
        int max_profit = 0;

        for (int price : prices) {
            if (price < lowest_price) {
                lowest_price = price;
                continue;
            }

            int profit = price - lowest_price;

            if (profit > max_profit) {
                max_profit = profit;
            }
        }

        return max_profit;
    }
};
