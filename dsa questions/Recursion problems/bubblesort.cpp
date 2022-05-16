// sort the array using bubble sort and recursion
// In this , after the  first iterate, the largest value in the array is  at the last position. 
// so, after ith iterate , till ith array, array is sorted form last.

#include<bits/stdc++.h>
using namespace std;

int sortarray(int *arr,int n){
    if(n==0 || n==1){
        return 1;
    }
    for(int i=0; i<n-1;++i){
        if(arr[i]>arr[i+1])
          swap(arr[i],arr[i+1]);
    }
    sortarray(arr,n-1);
}

int main(){
    int n=5;
    int arr[]={2,9,4,3,7};
    sortarray(arr,n);
    for(int i=0; i<n;++i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
