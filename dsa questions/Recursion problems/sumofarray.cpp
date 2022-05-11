#include<bits/stdc++.h>
using namespace std;
int getsum(int *arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum = arr[0]+ getsum(arr+1, n-1);
       return sum;
}

int main(){
    int arr[5]={1,3,4,5,60};
    int size=5;
    int sum = getsum(arr,size);
    cout<<"Sum of array is: "<<sum<<endl;
    return 0;
}  