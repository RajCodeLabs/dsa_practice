class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;
        int i, j, num1, num2, len = nums.size();
        for(i = 0; i < len; i++)
        {
            num1 = nums[i];
            num2 = target - nums[i];
            if(map.find(num2) != map.end())
                return {i, map[num2]};
            map[nums[i]] = i;
        }
        return {-1, -1};
    }
};