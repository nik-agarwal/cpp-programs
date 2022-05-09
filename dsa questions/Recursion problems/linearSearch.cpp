#include<bits/stdc++.h>
using namespace std;
bool linearsearching(int *arr, int size, int key){
        if(size==0){
            return false;
        }
       if(arr[0]==key){
           return true;
       }
       else{
        return linearsearching(arr+1, size-1, key);
       }
}


int main(){
    int arr[5]={1,3,4,5,60};
    int size=5;
    int key = 15;
    bool ans = linearsearching(arr,size,key);
    cout<<ans<<endl;
    return 0;
}