// Problem Link : https://codeforces.com/problemset/problem/1901/A
#include <bits/stdc++.h>
using namespace std;
int minimum_fuel(int n,int x,int arr[]){
    int i,ans=0,cnt=0;
    unordered_map<int,bool> pump;
    for(i=0;i<n;i++) pump[arr[i]]=true;
    for(i=1;i<x;i++){
        cnt++;
        if(pump[i]==true) ans=max(ans,cnt),cnt=0;
    }
    for(i=x;i>0;i--){
        cnt++;
        if(pump[i]==true) ans=max(ans,cnt),cnt=0;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        int v,i;
        for(i=0;i<n;i++){
            cin>>v;
            arr[i]=v;
        }
        int ans=minimum_fuel(n,x,arr);
        cout<<ans<<endl;
    }
}
