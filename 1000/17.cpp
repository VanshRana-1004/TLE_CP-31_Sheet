// Problem Link : https://codeforces.com/problemset/problem/1632/B
#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    if(n%2==1) return false;
    while(n%2==0) n/=2;
    if(n==1) return true; 
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i,n1,n;
        cin>>n;
        n1=n-1;
        while(n1>0 && !check(n1)) n1--;
        if(n1>0){
            for(i=1;i<n1;i++) cout<<i<<" ";
            cout<<0<<" ";
        }
        for(i=n1;i<n;i++) cout<<i<<" ";
        cout<<endl;
    }
}
