// Problem Link : https://codeforces.com/problemset/problem/1873/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,x,i,s=1,e=1e10,mid,ans=0,keep;
        cin>>n>>x;
        vector<ll> hgh(n);
        for(i=0;i<n;i++) cin>>hgh[i];
        while(s<=e){
            keep=0;
            mid=s+(e-s)/2;
            for(i=0;i<n;i++) if(hgh[i]<mid) keep+=mid-hgh[i];  
            if(keep<=x) ans=mid,s=mid+1;
            else e=mid-1;
        }
        cout<<ans<<endl;
    }
}
