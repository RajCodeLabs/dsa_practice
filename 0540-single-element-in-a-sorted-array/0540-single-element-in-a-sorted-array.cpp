class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int pos1 = 0, pos2 = nums.size() - 1;
        while(pos1 < pos2){
            int mid = (pos1 + pos2) / 2;
            if((mid % 2) == 1){
                mid--;
            }
            if(nums[mid] == nums[mid + 1]){
                pos1 = mid + 2;
            }
            else{
                pos2 = mid - 1;
            }
        }
        return nums[pos1];
    }
};