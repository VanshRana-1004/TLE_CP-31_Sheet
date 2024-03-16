// Problem Link : https://codeforces.com/contest/1696/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,x,i=0,ans=0;
        cin>>n;
        vector<int> arr;
        while(i++<n){
            cin>>x;
            arr.push_back(x);
        }
        i=0;
        while(i<n){
            while(i<n && arr[i]==0) i++;
            if(i<n) ans++;
            while(i<n && arr[i]!=0) i++;
        }
        if(ans>2) cout<<2<<endl;
        else cout<<ans<<endl;
    }
}
