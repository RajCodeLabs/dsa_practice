class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum, i, j, len = numbers.size();
        i = 0, j = len - 1;
        while((i < len) && (j >= 0))
        {
            sum = numbers[i] + numbers[j];
            if(sum == target)
            {
                return {i + 1, j + 1};
            }
            else if( sum < target)
            {
                i++;
            }
            else if(sum > target)
            {
                j--;
            }
        }
        return { -1, -1};
    }
};