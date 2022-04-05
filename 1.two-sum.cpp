/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        int flag=0;
        for(int i=0; i<(nums.size() - 1); i++){
            for(int j=i+1; j<nums.size(); j++){
            if(nums[i] + nums[j]  == target){
                r.push_back(i);
                r.push_back(j);
                flag=1;
                break;
            }
            }
            if(flag != 0){
                break;
            }
        }
        return r;
    }
};
// @lc code=end

