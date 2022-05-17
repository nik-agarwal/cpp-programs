#include<bits/stdc++.h>
using namespace std;

void insersionsortrecursive(int arr[],int n){
    if(n==0|| n==1)
      return;
      
    insersionsortrecursive(arr,n-1);
    
    int last = n-1;
    int j = n-2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

int main()
{
   int n=5;
   int arr[5]={1,2,1,4,3};
   insersionsortrecursive(arr,n);
   for(int i=0;i<n;++i){
       cout<<arr[i]<<"  ";
   }
    return 0;
}
