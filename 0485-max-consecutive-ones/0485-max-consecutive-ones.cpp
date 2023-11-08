class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, currentOnes = 0, i, length = nums.size();
        
        for(i = 0; i < length; i++)
        {
            if(nums[i] == 1)
            {
                currentOnes++;
            }
            else
            {
                currentOnes = 0;
            }
            
            maxOnes = max(maxOnes, currentOnes);
        }
        
        return maxOnes;
    }
};