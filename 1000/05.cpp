// Problem Link : https://codeforces.com/contest/1849/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pp pair<ll,ll>
class cmp{
    public:
    bool operator()(pp &p1,pp &p2){
        if(p1.first!=p2.first) return p1.first<p2.first;
        return p1.second>p2.second;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll i,n,k,x;
        cin>>n>>k;
        priority_queue<pp,vector<pp>,cmp> pq;
        for(i=1;i<=n;i++){
            cin>>x;
            if(x%k!=0) pq.push({x%k,i});
            else cout<<i<<" ";
        }
        while(!pq.empty()) cout<<pq.top().second<<" ",pq.pop();
        cout<<endl;
    }   
}
