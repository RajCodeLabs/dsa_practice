class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit;
        auto buyDay = prices.begin();
        auto sellDay = prices.begin() + 1;
        while(sellDay != prices.end())
        {
            if(*(buyDay) > *(sellDay))
            {
                buyDay = sellDay;
            }
            else
            {
                profit = *(sellDay) - *(buyDay);
                maxProfit = max(maxProfit, profit);
            }
            sellDay++;
        }
        return maxProfit;
    }
};