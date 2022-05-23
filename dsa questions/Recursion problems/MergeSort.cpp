#include<bits/stdc++.h>
#include <stdio.h>

using namespace std;

void merge(int *arr,int s,int e){
   // int mid = s+(e-s)/2;
    int mid = (s+e)/2;
    int len1= mid-s+1;
    int len2 = e-mid;
    
    int *first = new int[len1];
    int *second =  new int[len2];
    
    int mainarrind = s;
    for(int i=0; i<len1;++i){
        first[i]= arr[mainarrind++];
    }
    
    mainarrind = mid+1;
    for(int i=0; i<len2;++i){
        second[i]= arr[mainarrind++];
    }
    
    int i1=0;
    int i2=0;
    mainarrind =s;
    
    while(i1<len1 && i2<len2){
        if(first[i1]<second[i2]){
            arr[mainarrind++]=first[i1++];
        }
        else
         arr[mainarrind++]= second[i2++];
    }
    while(i1<len1)
      arr[mainarrind++]= first[i1++];
      
    while(i2<len2){
        arr[mainarrind++]= second[i2++];
    }  
}

void mergesort(int *arr, int s, int e){
  //   cout<<"hello";
    if(s>=e){
        return;
    }
   // int mid = s+ (e-s)/2;
   int mid = (s+e)/2;
  //  cout<<"hi";
    
    mergesort(arr,s,mid);   //left part 
    
    mergesort(arr,mid+1,e);  // right part
    
    merge(arr,s,e);
}

int main()
{
    int n=8;
    int arr[8]={1,5,9,3,6,2,4,5};
    //cout<<"hhh";
    mergesort(arr,0,n-1);

    for(int i=0; i<n;++i){
        cout<<arr[i]<<endl;
    }

    return 0;
}
