// Problem Link : https://codeforces.com/problemset/problem/1855/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,i=1;
        cin>>n;
        while(i<=n && n%i==0) i++; 
        cout<<i-1<<endl;
    }
}
