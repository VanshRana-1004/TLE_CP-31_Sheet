// Problem Link : https://codeforces.com/contest/1848/problem/B
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
#define vuni vector<uni>
#define vpi vector<pi>
#define vpl vector<pl>
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
ll power(ll x,ll n){
    ll r=x,p=1;
    while(n>0){
        if(n&1) p=(p*r)%mod,n-=1;
        else r=(r*r)%mod,n/=2;
    }
    return p;
}
ll mod_sub(ll a,ll b){
    a%=mod;
    b%=mod;
    return ((a-b)%mod+mod)%mod;
}
ll gcd(ll a,ll b){
    while(a!=0 && b!=0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a==0) return b;
    return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,k,ans=1e5;
        cin>>n>>k;
        vll arr(n);
        read(arr,n);
        vlll store(k+1);
        for(ll i=0;i<n;i++) store[arr[i]].pb(i);
        for(ll i=1;i<=k;i++){
            if(store[i].size()>0){
                ll maxi=store[i][0],maxi2=-1;
                for(ll j=1;j<store[i].size();j++){
                    if(maxi<store[i][j]-store[i][j-1]-1) maxi2=maxi,maxi=store[i][j]-store[i][j-1]-1;
                    else if(maxi2<store[i][j]-store[i][j-1]-1) maxi2=store[i][j]-store[i][j-1]-1;
                }
                if(n-store[i].back()-1>maxi) maxi2=maxi,maxi=n-store[i].back()-1;
                else if(n-store[i].back()-1>maxi2) maxi2=n-store[i].back()-1;
                ll dis=max(maxi2,maxi/2);
                ans=min(ans,dis);
            }
        }
        cout<<ans<<nl;
    }    
}
