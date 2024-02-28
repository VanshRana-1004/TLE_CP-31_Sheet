// Problem Link : https://codeforces.com/contest/1857/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x,o=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x%2==1) o++;
        }
        if(o%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
