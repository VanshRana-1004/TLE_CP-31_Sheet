// Problem Link : https://codeforces.com/problemset/problem/1633/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define uni unsigned long long int
#define pb(x) push_back(x)
#define sz(arr) arr.size()
#define ssz(s) s.length()
#define nl endl
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
#define srt(arr) sort(arr.begin(),arr.end())
#define srtr(arr) sort(arr.rbegin(),arr.rend())
#define rev(arr) reverse(arr.begin(),arr.end())
#define pi pair<int,int>
#define pl pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<vector<int>>
#define vlll vector<vector<ll>>
#define mn(a) *min_element(a.begin(),a.end())
#define mx(a) *max_element(a.begin(),a.end())
#define vs vector<string>
#define vss vector<vector<string>>
#define vc vector<char>
#define vcc vector<vector<char>>
#define pre_sum(pre,arr,n) for(i=1;i<n;i++) pre[i]=pre[i-1]+arr[i]
#define suf_sum(suf,arr,n) for(i=n-2;i>=0;i--) suf[i]=suf[i+1]+arr[i]
const double pie=3.14159265358979323846264338327950;
const ll mod=1e9+7;
ll gcd(ll a,ll b){
while(a!=0 && b!=0){
if(a>b) a%=b;
else b%=a;
}
if(a==0) return b;
return a;
}
vll store(1001,-1);
ll solve(ll i,ll k,ll &n,vll &b,vll &c,vlll &dp){
    if(i>=n) return 0;
    if(dp[i][k]!=-1) return dp[i][k];
    ll not_pick=solve(i+1,k,n,b,c,dp),pick=0;
    if(k-b[i]>=0) pick=c[i]+solve(i+1,k-b[i],n,b,c,dp);
    return dp[i][k]=max(pick,not_pick);
}
ll bfs(ll n){
    vll visited(1001,0);
    ll step=0;
    queue<ll> q;
    q.push(1);
    q.push(-1);
    visited[1]=1;
    while(!q.empty()){
        ll node=q.front();
        if(node==n) return step;
        q.pop();
        if(node!=-1){
            for(ll i=1;i<=n;i++){
                if(node+(node/i)==n) return step+1;
                else if(node+(node/i)<n && visited[node+(node/i)]==0) q.push(node+(node/i)),visited[node+(node/i)]=1;
            }
        }
        else{
            step++;
            if(!q.empty()) q.push(-1);
        }
    }
    return step;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,i;
        cin>>n>>k;
        k=min(k,12*n);
        vll b(n),c(n);
        read(b,n);
        read(c,n);
        // Step 1 : calculate minimum steps required to make 1 -> b[i 
        for(i=0;i<n;i++){
            if(store[b[i]]==-1) store[b[i]]=bfs(b[i]);
            b[i]=store[b[i]];
        } 
        // Step 2 : Calculate  the profit by choosing exactly k max profit items
        // choose those steps whose sum is equal to k and profit is maximum use 01 knapsack and dp
        vlll dp(n+1,vll(k+1,-1));    
        int ans=solve(0,k,n,b,c,dp);
        cout<<ans<<nl;
    }    
}
