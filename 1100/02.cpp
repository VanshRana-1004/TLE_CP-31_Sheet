// Problem Link : https://codeforces.com/problemset/problem/1914/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ans=0,x,i,n,k;
        cin>>n>>k;
        priority_queue<int> pq;
        vector<int> f(n),r(n);
        for(i=0;i<n;i++) cin>>f[i];
        for(i=0;i<n;i++) cin>>r[i];
        for(i=1;i<n;i++) f[i]+=f[i-1];
        for(i=1;i<n;i++) r[i]=max(r[i],r[i-1]);
        for(i=0;i<n && i<k;i++){
            if(i==k-1) ans=max(ans,f[i]);
            else ans=max(ans,f[i]+(k-(i+1))*r[i]);
        } 
        cout<<ans<<endl;
    }
}
