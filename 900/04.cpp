// Problem Link : https://codeforces.com/contest/1875/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,b,n,x,sum=0;
        cin>>a>>b>>n;
        while(n-->0){
            cin>>x;
            if(x<a) sum+=x;
            else sum+=a-1;
        }
        sum+=b;
        cout<<sum<<endl;
    }
}
