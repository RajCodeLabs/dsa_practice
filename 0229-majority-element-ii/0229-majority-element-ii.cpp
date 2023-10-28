class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, element1 = 0, element2 = 1;
        int n = nums.size() / 3;
        vector<int> result;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == element1)
                count1++;
            else if(nums[i] == element2)
                count2++;
            else if(count1 == 0)
            {
                count1 = 1;
                element1 = nums[i];
            }
            else if(count2 == 0)
            {
                count2 = 1;
                element2 = nums[i];
            }
            else
            {
                count1--;
                count2--;
            }
        }
        //finding the 2 most occuring elements in the array
        
        count1 = count2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == element1)
                count1++;
            else if(nums[i] == element2)
                count2++;
        }
        //counting the number of times they occur
        
        if(count1 > n)
            result.emplace_back(element1);
        if(count2 > n)
            result.emplace_back(element2);
        //add them to the result if they occur more than size/3
        
        return result;
    }
};