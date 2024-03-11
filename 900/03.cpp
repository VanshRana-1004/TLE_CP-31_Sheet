// Problem Link : https://codeforces.com/problemset/problem/1878/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,x,k;
        cin>>n>>k>>x;
        unsigned long long int min_sum=(k*(k+1))/2,max_sum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(max_sum<x || min_sum>x) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
