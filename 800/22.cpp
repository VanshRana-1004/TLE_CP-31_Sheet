// Problem Link : https://codeforces.com/problemset/problem/1814/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,k;
        cin>>n>>k;
        if(n==1 && k!=1) cout<<"NO"<<endl;
        else if(n%2==0 || n%k==0 || n%(2+k)==0 || (n-k)%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
