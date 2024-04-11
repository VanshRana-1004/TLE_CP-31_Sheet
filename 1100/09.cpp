// Problem Link : https://codeforces.com/contest/1850/problem/E
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,c,i;
        cin>>n>>c;
        vector<ll> store(n);
        for(i=0;i<n;i++) cin>>store[i];
        ll s=1,e=1e9,mid,ans=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            ll area=0;
            for(i=0;i<n;i++){
                area+=(store[i]+2*mid)*(store[i]+2*mid);
                if(area>c) break;
            } 
            if(area==c){
                ans=mid;
                break;
            }
            if(area<c) s=mid+1;
            else e=mid-1;
        }
        cout<<ans<<endl;
    }
}
