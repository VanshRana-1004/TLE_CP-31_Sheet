// Problem Link : https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,ans=INT_MAX;
    cin>>n;
    while(n--){
        cin>>x;
        ans=min(abs(x),ans);
    }
    cout<<ans<<endl;
}
