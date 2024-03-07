// Problem Link : https://codeforces.com/problemset/problem/1761/A
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && a==b && n==1) cout<<"YES"<<endl;
        else if(n-a-b<2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
