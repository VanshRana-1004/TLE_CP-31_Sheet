// Problem Link : https://codeforces.com/problemset/problem/1840/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k,q,x,i,j,len=0,ans=0,way;
        cin>>n>>k>>q;
        for(i=0;i<n;i++){
            cin>>x;
            if(x<=q) len++;
            else{
                if(len==k) ans++;
                else if(len>k){
                    way=(len*(len+1))/2;
                    if(k-1>0) way=((len-(k-1))*(len-(k-1)+1))/2;
                    ans+=way;
                }
                len=0;
            }
        }
        if(len==k) ans++;
        else if(len>k){
            way=(len*(len+1))/2;
            if(k-1>0) way=((len-(k-1))*(len-(k-1)+1))/2;
            ans+=way;
        }
        cout<<ans<<endl;
    }
}
