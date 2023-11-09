class Solution {
public:
    
    void recursion(vector<int>& nums, vector<vector<int>>& res, vector<int>& subset, int index)
    {
        res.emplace_back(subset);
        for(int i = index; i < nums.size(); i++)
        {
            if((i == index) || (nums[i] != nums[i - 1]))
            {
                subset.emplace_back(nums[i]);
                recursion(nums, res, subset, i + 1);
                subset.pop_back();
            }
            
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        
        sort(nums.begin(), nums.end());
        recursion(nums, res, subset, 0);
        
        return res;
    }
};