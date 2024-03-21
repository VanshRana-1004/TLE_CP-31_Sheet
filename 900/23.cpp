// Problem Link : https://codeforces.com/problemset/problem/1559/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,i=0,x,ans=0;
        cin>>n;
        while(i<n){
            cin>>x;
            if(i==0) ans=x;
            else ans=ans&x;
            i++;
        }
        cout<<ans<<endl;
    }
}
