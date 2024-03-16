// Problem Link : https://codeforces.com/contest/1726/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i,x,ind_mini=-1,ind_maxi=-1,mini=INT_MAX,maxi=INT_MIN,ans=0;
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++){
            cin>>x;
            arr.push_back(x);
        }
        for(i=0;i<n;i++){
            if(i>0) ans=max(ans,arr[i-1]-arr[i]);
            if(i>0) ans=max(ans,arr[i]-arr[0]);
            if(i<n-1) ans=max(ans,arr[n-1]-arr[i]);
        }
        cout<<ans<<endl;
    }
}
