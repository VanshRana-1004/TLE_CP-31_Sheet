// Problem Link : https://codeforces.com/problemset/problem/1659/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i=0,j,n,r,b,div,rem;
        cin>>n>>r>>b;
        div=r/(b+1);
        rem=r%(b+1);
        while(i<n){
            for(j=0;j<div && i<n;j++) i++,cout<<"R";
            if(i<n && rem>0) i++,cout<<"R",rem--;
            if(i<n) i++,cout<<"B";
        }
        cout<<endl;
    }   
}
