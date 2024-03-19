// Problem Link : https://codeforces.com/problemset/problem/1607/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int x,n,s;
        cin>>x>>n;
        s=n+1;
        n%=4;
        s-=n;
        while(n>0){
            if(x%2==0) x-=s;
            else x+=s;
            n--;
            s++;
        }
        cout<<x<<endl;
    }
}
