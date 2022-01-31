// Q. Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Example 1:

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     int i=0;
        int j;
        for(j=0; j<nums.size();++j){
            if(nums[j]!=0){
                swap(nums[j],nums[i]);
                i++;
            }
        }
    }
};