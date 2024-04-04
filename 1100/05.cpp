// Problem Link : https://codeforces.com/problemset/problem/1899/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll i,j,x,n,ans=0;
        cin>>n;
        vector<ll> pre;
        pre.push_back(0);
        for(i=0;i<n;i++){
            cin>>x;
            pre.push_back(x+pre.back());
        }
        for(i=1;i<=n;i++){
            if(n%i==0){
                vector<ll> v;
                for(j=i;j<=n;j+=i) v.push_back(pre[j]-pre[j-i]);
                sort(v.begin(),v.end());
                ans=max(ans,v[v.size()-1]-v[0]);
            }
        }
        cout<<ans<<endl;
    }
}
