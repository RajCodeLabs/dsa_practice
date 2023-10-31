class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        unordered_set<long long> seen;
        set<multiset<long long>> ans_set;
        int n = size(nums);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long lastNumber = (long long) target - ((long long) nums[i] + (long long) nums[j] + (long long) nums[k]);
                    if (seen.count(lastNumber))
                        ans_set.emplace(multiset<long long>{nums[i], nums[j], nums[k], lastNumber});
                }
            }
            seen.insert(nums[i]);
        }
        vector<vector<int>> ans;
        for (const auto &el : ans_set) {
            ans.emplace_back(vector<int>(begin(el), end(el)));
        }
        return ans;
    }
};