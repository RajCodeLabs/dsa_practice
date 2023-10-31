class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int i, j, len = nums.size();
        for(i = 0; i < len; i++)
        {
            for(j = i + 1; j < len; j++)
            {
                if((nums[i] + nums[j]) == target)
                {
                    res.emplace_back(i);
                    res.emplace_back(j);
                }
            }
        }        
        return res;
    }
};