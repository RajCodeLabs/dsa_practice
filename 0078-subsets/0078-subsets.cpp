class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res = {{}};
        int i, len;
        for(int num : nums)
        {
            len = res.size();
            for(i = 0; i < len; i++)
            {
                res.emplace_back(res[i]);
                res.back().emplace_back(num);
            }
        }
        
        return res;
    }
};