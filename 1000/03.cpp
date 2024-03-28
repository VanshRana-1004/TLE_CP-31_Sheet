// Problem Link : https://codeforces.com/problemset/problem/1876/A
#include <bits/stdc++.h>
using namespace std;
#define uni unsigned long long int
#define pp pair<uni,uni>
int main()
{
    int t;
    cin>>t;
    while(t--){
        uni n,p,i,ans=0,left;
        cin>>n>>p;
        vector<pp> store(n);
        for(i=0;i<n;i++) cin>>store[i].second;
        for(i=0;i<n;i++) cin>>store[i].first;
        sort(store.begin(),store.end());
        ans+=p;
        left=n-1;
        i=0;
        while(left>0){
            if(store[i].first>p) break;
            if(store[i].second>=left) ans+=left*store[i].first,left=0;
            else ans+=store[i].second*store[i].first,left-=store[i].second;
            i++;
        }
        ans+=p*left;
        cout<<ans<<endl;
    }
}
