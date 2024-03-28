// Problem Link : https://codeforces.com/problemset/problem/1859/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long i,j,n,m,x,ans=0,mini=INT_MAX,min_ind=-1,least=INT_MAX,lst_ind=-1;
        cin>>n;
        vector<vector<long long>> store(n);
        for(i=0;i<n;i++){
            cin>>m;
            for(j=0;j<m;j++){
                cin>>x;
                store[i].push_back(x);
            }
            sort(store[i].begin(),store[i].end());
            if(least>store[i][0]) least=store[i][0],lst_ind=i;
            if(mini>store[i][1]) mini=store[i][1],min_ind=i;
        }
        ans+=store[lst_ind][0];
        for(i=0;i<n;i++) if(i!=min_ind) ans+=store[i][1];
        cout<<ans<<endl;
    }
}
