// find the power of a number
// example find the 2^4 
// answer is 14


#include<bits/stdc++.h>
using namespace std;

int pow(int n, int p){
    if(p==0)
      return 1;
    else 
      return (n*pow(n,p-1));   
}


int main()
{
    int n;
    cin>>n;
    int power;
    cin>>power;
    int a = pow(n,power);
    cout<<a<<endl;
    return 0;
}
