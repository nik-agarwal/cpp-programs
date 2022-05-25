// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<nums.size();++i){
            currsum+=nums[i];
            if(currsum>maxsum){
                maxsum = currsum;
            }
            if(currsum<0)
                currsum =0;
        }
        return maxsum;
    }
};
