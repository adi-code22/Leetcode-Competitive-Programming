/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        vector<int> vec;
        for(int i=0; i<nums1.size(); i++){
            vec.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            vec.push_back(nums2[i]);
        }
        sort(vec.begin(), vec.end());
        double median;
        if(size%2){
            median = vec[(size/2)];
        }
        else{
            
            median = vec[(size/2) - 1] + vec[(size/2)];
            median/=2;
        }
        return median;
        
    }
};
// @lc code=end

