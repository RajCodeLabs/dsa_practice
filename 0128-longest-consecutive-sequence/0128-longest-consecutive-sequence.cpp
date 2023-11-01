class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int i, maxSequence = 0, currentSequence = 0, len = nums.size();
        
        if(len < 1)
            return 0;
        
        sort(nums.begin(), nums.end());
        
        for(i = 1; i < len; i++)
        {
            switch(nums[i] - nums[i-1])
            {
                case 0:
                    continue;
                case 1:
                    currentSequence += 1;
                    maxSequence = ((maxSequence > currentSequence) ? maxSequence : currentSequence);
                    break;
                default:
                    currentSequence = 0;
                    break;
            }
        }
        
        return (maxSequence + 1);
    }
};