// (x^n)%m
// m = 10^9 + 7


int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int a=1;
	while(n>0){
		if(n&1)
			a=(1ll * a*(x%m))%m;
		x=(1ll * (x%m)*(x%m))%m;
		n= n>>1;
	}
	return a;
}