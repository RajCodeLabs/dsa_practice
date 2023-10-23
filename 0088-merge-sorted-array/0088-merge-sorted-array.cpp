class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(nums1.size() > 0)
        {
            nums1.erase(nums1.begin() + m, nums1.end());
            nums2.erase(nums2.begin() + n, nums2.end());
        }
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};