// Problem Link : https://codeforces.com/problemset/problem/1447/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,c=0,z=0,i,n,m,sum=0,mini=INT_MAX;
        cin>>n>>m;
        for(i=0;i<n*m;i++){
            cin>>x;
            if(x<0) c++;
            else if(x==0) z++;
            sum+=abs(x);
            mini=min(mini,abs(x));
        }
        if(c==0 || c%2==0 || (c%2==1 && z>0)) cout<<sum<<endl;
        else cout<<sum-2*mini<<endl;
    }
}
