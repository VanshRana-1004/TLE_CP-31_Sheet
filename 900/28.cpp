// Problem Link : https://codeforces.com/problemset/problem/1440/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,i=0,x,ans=0;
        cin>>n>>k;
        vector<long long> arr;
        while(i<n*k){
            cin>>x;
            arr.push_back(x);
            i++;
        }
        x=n/2+1;
        i=n*k-x;
        while(i>=0 && k-->0){
            ans+=arr[i];
            i-=x;
        }
        cout<<ans<<endl;
    }
}
