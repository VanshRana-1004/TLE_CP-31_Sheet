// Problem Link : https://codeforces.com/problemset/problem/1620/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int x,i,j,a,b,c,d=0,mini=INT_MAX,maxi=INT_MIN,ans=0;
        cin>>a>>b;
        for(i=0;i<4;i++){
            cin>>c;
            mini=INT_MAX;
            maxi=INT_MIN;
            for(j=0;j<c;j++){
                cin>>x;
                mini=min(mini,x);
                maxi=max(maxi,x);
            }
            if(i<2) ans=max(ans,b*(maxi-mini));
            else ans=max(ans,a*(maxi-mini));
        }
        cout<<ans<<endl;
    }
}
