// Problem Link : https://codeforces.com/problemset/problem/1766/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        if(n<=10) cout<<n<<endl;
        else if(n<=100) cout<<9+n/10<<endl;
        else if(n<=1000) cout<<18+n/100<<endl;
        else if(n<=10000) cout<<27+n/1000<<endl;
        else if(n<=100000) cout<<36+n/10000<<endl;
        else cout<<45+n/100000<<endl;
    }
}
