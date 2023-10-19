class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit;
        auto buyDay = prices.begin();
        for(auto sellDay = prices.begin() + 1; sellDay != prices.end(); sellDay++)
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
        }

        return maxProfit;

    }
};