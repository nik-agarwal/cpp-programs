#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>n;
	    int f=0;
	    while(n!=0){
	         m=n%10;
	         n=n/10;
	         if(m==4){
	             f++;
	         }
	    }
	    cout<<f<<endl;
	}
	return 0;
}
