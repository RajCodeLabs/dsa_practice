class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> res;
        int i, j, k, len = nums.size(), sum;
        
        sort(nums.begin(), nums.end());
        
        for (i = 0; i < (len - 2); i++)
        {
            if((i != 0) && (nums[i] == nums[i - 1]))
                continue;
            j = i + 1;
            k = len - 1;
            while (j < k) 
            {
                sum = nums[i] + nums[j] + nums[k];
                if (sum < 0)
                {
                    j++;
                }
                else if (sum > 0)
                {
                    k--;
                }
                else 
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while ((j < k) && (nums[j] == nums[j - 1])) 
                        j++;
                    while ((j < k) && (nums[k] == nums[k + 1]))
                        k--;
                }
            }
        }
        
        return res;
        
    }
};