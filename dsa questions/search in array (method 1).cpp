// Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.

// Example 1:

// Input:
// N = 9
// A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3}
// key = 10
// Output:
// 5
// Explanation: 10 is found at index 5.

// this is a method 1 in this simple linear searched is applied which has time complexity of O(N) in wrost cases.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
    
    for(int i=l; i<h;++i){
        if(A[i]==key)
          return i;
    }
    return -1;
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
