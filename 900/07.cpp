// Problem Link : https://codeforces.com/problemset/problem/1850/D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x,i=0,cnt,ans=INT_MAX;
        cin>>n>>k;
        vector<int> arr;
        while(i++<n){
            cin>>x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        i=0;
        while(i<n-1){
            cnt=0;
            while(i<n-1 && arr[i+1]-arr[i]<=k) i++,cnt++;
            ans=min(ans,n-(cnt+1));
            i++;
        }
        if(ans==INT_MAX) cout<<0<<endl;
        else cout<<ans<<endl;
    }
}
