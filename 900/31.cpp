// Problem Link : https://codeforces.com/problemset/problem/1374/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,f=0,g=0,ans=0;
        cin>>n;
        while(n!=1){
            if(n%6==0) ans++,f=0,n/=6;
            else{
                if(f==1) g=1;
                ans++,n*=2,f=1;
            }
            if(g==1) break;
        }
        if(g==1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}
