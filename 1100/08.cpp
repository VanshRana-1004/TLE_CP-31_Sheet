// Problem Link : https://codeforces.com/contest/1869/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pp pair<ll,ll>
#define endl "\n"
int main()
{   
    int t;
    cin>>t;
    while(t--){
        ll i,j,n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pp> coord(n);
        for(i=0;i<n;i++) cin>>coord[i].first>>coord[i].second;
        if(a<=k && b<=k) cout<<0<<endl;
        else{
            ll srcx=coord[a-1].first,srcy=coord[a-1].second,desx=coord[b-1].first,desy=coord[b-1].second;
            ll ans=llabs(srcx-desx)+llabs(srcy-desy),dis1=LLONG_MAX/2,dis2=LLONG_MAX/2;
            for(i=0;i<k;i++){
                dis1=min(dis1,llabs(srcx-coord[i].first)+llabs(srcy-coord[i].second));
                dis2=min(dis2,llabs(desx-coord[i].first)+llabs(desy-coord[i].second));
            }
            ans=min(ans,dis1+dis2);
            cout<<ans<<endl;
        }
    }
}
