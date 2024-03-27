// Problem Link : https://codeforces.com/problemset/problem/1725/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,x,n,d,ans=0;
    cin>>n>>d;
    vector<int> pwr;
    for(i=0;i<n;i++){
        cin>>x;
        pwr.push_back(x);
    }
    sort(pwr.rbegin(),pwr.rend());
    for(i=0;i<n;i++) pwr[i]=d/pwr[i]+1;
    i=0;
    while(i<pwr.size()){
        if(pwr[i]<=n) n-=pwr[i],ans++,i++;
        else break;
    }
    cout<<ans<<endl;
}
