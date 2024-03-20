// Problem Link : https://codeforces.com/problemset/problem/1582/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int n,x,o=0,z=0,ans=0;
        cin>>n;
        while(n--){
            cin>>x;
            if(x==0) z++;
            if(x==1) o++;
        }
        ans=o;
        ans*=pow(2,z);
        cout<<ans<<endl;
    }
}
