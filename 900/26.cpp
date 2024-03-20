// Problem Link : https://codeforces.com/problemset/problem/1475/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,i=3,f=0;
        cin>>n;
        if(n%2==1) cout<<"YES"<<endl;
        else{
            while(n>1 && n%2==0) n/=2;
            if(n==1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}
