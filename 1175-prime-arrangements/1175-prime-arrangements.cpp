class Solution {
    
public:
    const long long MOD = 1000000007;
    bool prime(int n){
        if(n==1)    return false;
        for(int i=2;i<n;i++){
            if(n%i==0)  return false;
        }

        return true;
    }

    long long factorial(int n){
        long long ans=1;

        for(int i=1;i<=n;i++){
            ans=(ans*i)%MOD;
        }
        return ans;
    }

    int numPrimeArrangements(int n) {
        int count=0;

        for(int i=1;i<=n;i++){
            if(prime(i))    count++;
        }
        return ((factorial(count)*factorial(n-count))%(MOD));

    }
};