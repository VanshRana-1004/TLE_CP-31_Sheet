// Problem Link : https://codeforces.com/contest/1850/problem/E
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,c,i,ans=-1;
        cin>>n>>c;
        vector<ll> size(n);
        for(i=0;i<n;i++) cin>>size[i];
        ll s=1,e=c,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            ll area=0;
            for(i=0;i<n && area<=c;i++) area+=(size[i]+(mid*2))*(size[i]+(mid*2));
            if(i==n && area==c){
                ans=mid;
                break;
            } 
            else if(i==n && area<c) s=mid+1;
            else e=mid-1;
        }
        cout<<ans<<endl;
    }
}
