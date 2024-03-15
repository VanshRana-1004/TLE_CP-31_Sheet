// Problem Link : 
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a%b,b);
    return gcd(a,b%a);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,i=1,x,ans=0;
        cin>>n;
        while(i<=n){
            cin>>x;
            ans=gcd(ans,abs(x-i));
            i++;
        }
        cout<<ans<<endl;
    }
}
