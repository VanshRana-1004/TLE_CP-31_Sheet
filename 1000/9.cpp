// Problem Link : https://codeforces.com/problemset/problem/1765/M
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long i,n,ans;
        cin>>n;
        vector<long long> divisor;
        // GET ALL THE DIVISORS
        for(i=2;i*i<=n;i++){
            if(n%i==0){
                divisor.push_back(i);
                if(n/i!=i) divisor.push_back(n/i);
            }             
        }
        ans=0;
        for(i=0;i<divisor.size();i++) if((n-divisor[i])%divisor[i]==0) ans=max(divisor[i],ans);
        if(ans==0) cout<<1<<" "<<n-1<<endl;
        else cout<<ans<<" "<<n-ans<<endl;
    }
}
