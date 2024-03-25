// Problem Link : https://codeforces.com/problemset/problem/1614/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int i=0,x,n,dis=0,a=1;
        cin>>n;
        vector<pair<int,int>> store;
        for(i=0;i<n;i++){
            cin>>x;
            store.push_back({x,i});
        }
        sort(store.rbegin(),store.rend());
        for(i=0;i<n;i+=2){
            dis+=a*store[i].first,store[i].first=1+a;
            if(i+1<n) dis+=a*store[i+1].first,store[i+1].first=1-a;
            a++;
        }
        cout<<2*dis<<endl;
        cout<<1<<" ";
        for(i=0;i<n;i++) swap(store[i].first,store[i].second);
        sort(store.begin(),store.end());
        for(i=0;i<n;i++) cout<<store[i].second<<" ";
        cout<<endl;
    }
}
