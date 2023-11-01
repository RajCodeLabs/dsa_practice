class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int i, difference, maxSequence = 0, currentSequence = 0, len = nums.size();
        
        if(len < 1)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        for(i = 1; i < len; i++)
        {
            difference = nums[i] - nums[i-1];
            if((difference == 1))
            {
                currentSequence += 1;
                maxSequence = max(currentSequence, maxSequence);
            }
            else if(difference == 0)
                continue;
            else
            {
                currentSequence = 0;
            }
        }
        
        return (maxSequence + 1);
    }
};