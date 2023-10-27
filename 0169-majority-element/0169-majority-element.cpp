class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int majority = nums[0], occurance = 1;
        
        for(auto num = nums.begin() + 1; num != nums.end(); num++)
        {
            if(occurance == 0)
                majority = *(num);
            
            if( *(num) == majority)
            {
                occurance++;
            }
            else
            {
                occurance--;
            }
        }
        
        return majority;
        
    }
};