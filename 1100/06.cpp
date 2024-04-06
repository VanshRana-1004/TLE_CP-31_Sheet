// Problem Link : https://codeforces.com/problemset/problem/1891/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> store(31);
    for(int i=1;i<=30;i++) store[i]=pow(2,i); 
    while(t--){
        int n,q,i,j,v,val;
        cin>>n>>q;
        vector<int> a(n),x;
        unordered_map<int,bool> mp;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<q;i++){
            cin>>v;
            if(mp.find(store[v])==mp.end()) x.push_back(store[v]),mp[store[v]]=true;
        }
        for(i=0;i<n;i++){
            val=a[i];
            for(j=0;j<x.size();j++) if(val%x[j]==0) val+=x[j]/2;
            a[i]=val;
        }    
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}
