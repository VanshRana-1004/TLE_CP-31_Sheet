// Problem Link : https://codeforces.com/problemset/problem/1834/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s,x,p=0,n=0,ans=0;
        cin>>s;
        while(s--){
            cin>>x;
            if(x==-1) n++;
            else p++; 
        }
        if(n>p){
            if((n-p)%2==0) ans+=(n-p)/2;
            else ans+=(n-p)/2+1;
            n-=ans;
        } 
        if(n%2==0) cout<<ans<<endl;
        else cout<<ans+1<<endl;
    }
}
