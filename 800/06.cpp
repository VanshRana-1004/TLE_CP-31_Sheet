// Problem Link : https://codeforces.com/problemset/problem/1890/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,i=0;
        cin>>n;
        unordered_map<int,int> cnt;
        while(i<n){
            cin>>x;
            cnt[x]++;
            i++;
        }
        if(cnt.size()>2) cout<<"NO"<<endl;
        else if(cnt.size()==1) cout<<"YES"<<endl;
        else{
            int a=0,b=0;
            for(auto x : cnt){
                if(a==0) a=x.second;
                else b=x.second;
            }
            if(a==b || a==b+1 || a+1==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
    }
}
