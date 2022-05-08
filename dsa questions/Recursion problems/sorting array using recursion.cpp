// check the given array is sorted or not using recursion

#include<bits/stdc++.h>
using namespace std;

bool issorted(int *arr, int n)
{
    if(n==1 || n==0)
        return true;

    if(arr[0]>arr[1]) {
        return false;
    }   
    else{
      bool rpart= issorted(arr+1, n-1);
      return rpart;
    }

}       

int main(){
    int arr[5]={1,3,4,5,60};
    int size=5;
    bool ans = issorted(arr,size);
    if(ans)
      cout<<"Array i sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
    return 0;
}