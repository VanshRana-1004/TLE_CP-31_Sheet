// Problem Link : https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,n,k;
        cin>>n>>k;
        unordered_map<int,int> mp;
        while(n--){
            cin>>x;
            mp[x]++;
        }
        if(mp.find(k)!=mp.end()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
}
