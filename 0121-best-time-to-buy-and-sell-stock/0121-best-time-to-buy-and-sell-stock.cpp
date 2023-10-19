class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        auto buyDay = prices.begin(), sellDay = prices.begin() + 1;
        while(sellDay != prices.end())
        {
            if(*(buyDay) > *(sellDay))
            {
                buyDay = sellDay;
            }
            else
            {
                maxProfit = max(maxProfit, *(sellDay) - *(buyDay));
            }
            sellDay++;
        }
        return maxProfit;
    }
};