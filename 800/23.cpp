// Problem Link : https://codeforces.com/problemset/problem/1806/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int s=d-b;
        if(s<0 || a+s<c) cout<<-1<<endl;
        else cout<<s+(a+s-c)<<endl;
    }
}
