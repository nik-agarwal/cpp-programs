// Rotate the array by juggling algorithm
// it will takes time complexity of O(n)
// and space complexity of O(1)
// GeeksForGeeks question - array rotation

#include <iostream>
#include <vector>
using namespace std;
int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
int rotate(vector<int> &arr, int s,int n){
      s=s%n;
      int gcd=GCD(s,n);
      for(int i=0; i<gcd;++i){
          int temp=arr[i];
          int j=i;
          while(1){
              int k= j+s;
              if(k==i)   // if k==i then we have reached the end of the array
                break;
              if(k>=n)   // if k is greater than n then we have to make array cyclic
                k=k-n;
              arr[j]= arr[k];
              j=k;    
          }
          arr[j]=temp;
      }
}
int main(){
      int n;
      cin>>n;
      vector<int> arr;
        for(auto i:arr)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        } 
            
        int s;
        cout<<"Enter the number of rotations: ";
        cin>>s;
        rotate(arr,s,n);
        for(auto i:arr)
        {
            cout<<i<<" ";
        }

}