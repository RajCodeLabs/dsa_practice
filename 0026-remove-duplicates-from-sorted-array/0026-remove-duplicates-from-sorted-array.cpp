class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
//         int length = nums.size(), duplicates = 0, i, j;
        
//         if(length <= 1)
//             return length;
        
//         int uniques = 1;
        
//         for(i = 1; i < length; i++)
//         {
//             if(!(nums[i] == nums[i - 1]))
//             {
//                 uniques++;
//             }
//         }
        
//         i = 1;
        
//         temp = uniques;
        
//         while(temp > 0)
//         {

//             while()
//         }
        
//         return i;
        
        int scanner = 1, holder = 1, length = nums.size(), uniques = 1;
        if(length <= 1)
            return length;
        
        while(scanner < length)
        {

            if(nums[scanner] == nums[scanner - 1])
            {
                scanner++;
                continue;
            }
            else
            {
                nums[holder] = nums[scanner];
                scanner++;
                holder++;
                uniques++;
            }
            
        }
        
        return uniques;
    }
};