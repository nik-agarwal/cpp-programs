// Seive of Eratosthenes method

class Solution {
public:
    int countPrimes(int n) {
        int count =0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;++i){
            if(prime[i]){
                count++; // count the prime numbers between 2 to n
            for(int j= 2*i;j<n;j=j+i) // becomes 0 all multiple of j
                prime[j]=0;
            }      
        }
        return count;
    }
};
