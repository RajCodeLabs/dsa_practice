class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int i, j, len = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        for(i = 0; i < (len - 3); i++){
            for(j = (i + 1); j < (len - 2); j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j + 1, high = len - 1;
                while(low < high){
                    if((nums[low] + nums[high]) < newTarget){
                        low++;
                    }
                    else if((nums[low] + nums[high]) > newTarget){
                        high--;
                    }
                    else{
                        output.push_back({nums[i], nums[j], nums[low], nums[high]});
                        int tempIndex1 = low, tempIndex2 = high;
                        while((low < high) && (nums[low] == nums[tempIndex1]))
                            low++;
                        while((low < high) && (nums[high] == nums[tempIndex2]))
                            high--;
                    }
                }
                while(((j + 1) < len) && (nums[j] == nums[j + 1]))
                    j++;
            }
            while(((i + 1) < len) && (nums[i] == nums[i + 1]))
                i++;
        }
        return output;
    }
};