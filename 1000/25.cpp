// Problem Link : https://codeforces.com/contest/1438/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,i=0,x,f=0;
        cin>>n;
        vector<long long> store;
        while(i<n){
            cin>>x;
            store.push_back(x);
            i++;
        }
        sort(store.begin(),store.end());
        for(i=0;i<n-1;i++){
            if(store[i]==store[i+1]){
                f=1;
                break;
            } 
        }
        if(f==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
