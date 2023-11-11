class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size(), len = len1 + len2;
        
        if (len1 > len2) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int leftLimit = 0, rightLimit = len1;
        while (leftLimit <= rightLimit) 
        {
            int nums1Partition = (leftLimit + rightLimit)/2;
            int nums2Partition = ((len + 1) / 2) - nums1Partition;
            int maxLeftNums1 = (nums1Partition == 0) ? INT_MIN : nums1[nums1Partition - 1];
            int minRightNums1 = (nums1Partition == len1) ? INT_MAX : nums1[nums1Partition];
            int maxLeftNums2 = (nums2Partition == 0) ? INT_MIN : nums2[nums2Partition - 1];
            int minRightNums2 = (nums2Partition == len2) ? INT_MAX : nums2[nums2Partition];
            if(maxLeftNums2 > minRightNums1)
            { 
                leftLimit = nums1Partition + 1;
            }
            else if (maxLeftNums1 > minRightNums2) 
            {
                rightLimit = nums1Partition - 1;
            }
            else if (maxLeftNums1 <= minRightNums2 && maxLeftNums2 <= minRightNums1) 
            {
                if ((len) % 2 == 0) 
                {
                    return ((double)max(maxLeftNums1, maxLeftNums2) + min(minRightNums1, minRightNums2))/2;
                } 
                else 
                {
                    
                    return (double)max(maxLeftNums1, maxLeftNums2);
                }
            } 
        }
        return 0.0;
    }
};