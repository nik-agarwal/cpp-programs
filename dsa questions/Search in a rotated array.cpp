
// Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. 
// The task is to find the index of the given element key in the array A.
// Example 1:
// Input:
// N = 9
// A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
// key = 10
// Output:
// 5
// Explanation: 10 is found at index 5.

// this is a method 2 in this binary searched is applied which has best time complexity of O(log(N)) in wrost cases, 
// which is the best compexity to solve this question.


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int getpivot(int arr[], int s, int e){   // to find the pivot element( pivot element in last element in the secoond line(two graph line are made
                           //  according to rotated array) like in this question the pivot element is 1 which is last element oof second line of rotated array. 
      int mid = s + (e-s)/2;
        while(s<e){
            if(arr[mid]>= arr[0])
              s= mid+1;
            else
             e = mid;
             
          mid = s + (e-s)/2;
        }
        return s;
    }
    
    int binarySearch(int arr[],int s,int e, int k){   // searching the element using binary search
        int mid = s+(e-s)/2;
        while(s<=e){
            if(arr[mid] == k)
              return mid;
            else if(k>arr[mid])
               s = mid+1;
            else
              e = mid-1;
              
            mid = s+(e-s)/2;  
              
        }
        return -1;
    }
    
    int search(int A[], int l, int h, int key){ 
         int pivot = getpivot(A,l,h);        // find pivot element 
         if(key>= A[pivot] && key<=A[h])        // condition to check the element is present in second line which contains wer values than first index value.
            return binarySearch(A,pivot,h,key);
        else
          return binarySearch(A,l,pivot-1,key);
    }      
};
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
} 
