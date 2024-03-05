// Problem Link : https://codeforces.com/problemset/problem/1831/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n,x;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            cout<<(n+1-x)<<" ";
        }
        cout<<endl;
    }
}
