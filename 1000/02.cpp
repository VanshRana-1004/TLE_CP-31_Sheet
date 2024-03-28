// Problem Link : https://codeforces.com/problemset/problem/1883/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,i,x,ans=5,one=0,two=0;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>x;
            if(x%k==1) one++;
            if(x%k==2) two++;
            if(x%k==0) ans=0;
            else ans=min(ans,k-x%k);
        }
        if(k==4){
            if(one>=1 && two>0) ans=min(ans,1);
            if(one>=2) ans=min(ans,2);
            if(two>=2) ans=0;
        }
        cout<<ans<<endl;
    }
}
