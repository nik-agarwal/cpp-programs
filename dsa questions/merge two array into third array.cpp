// in this we merger two array in sorted order into another array


#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    void merge(vector <int>& nums1, int m, vector <int>& nums2, int n) {
        vector <int> nums3;
        int i=0,j=0;
        int k=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j])
                nums3[k++] = nums1[i++];   // if value of 1st array is smaller than 2nd array
            else{
               nums3[k++]= nums2[j++];    // if value of 1st array is greater than 2nd array
            }
        }
        while(j<n){
            nums3[k++]=nums2[j++];     // if value of 1st array ends then simply move elements of 2nd array to the 3rd array
        }
        while(i<m){
            nums3[k++]=nums1[i++];     // if value of 2nd array ends then simply move elements of 1st array to the 3rd array
        }
    }
};