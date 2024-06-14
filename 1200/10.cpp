// Problem Link : https://codeforces.com/problemset/problem/1742/E
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
#define pre_sum(pre,arr,n) for(ll i=1;i<n;i++) pre[i]=pre[i-1]+arr[i]
#define suf_sum(suf,arr,n) for(ll i=n-2;i>=0;i--) suf[i]=suf[i+1]+arr[i]
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
        ll n,q;
        cin>>n>>q;
        vll step(n),leg(q);
        read(step,n);
        read(leg,q);
        vll pre=step;
        pre_sum(pre,step,n);
        for(ll i=1;i<n;i++) step[i]=max(step[i],step[i-1]);
        for(ll i=0;i<q;i++){
            ll l=leg[i],s=0,e=n-1,mid,dis=0;
            while(s<=e){
                mid=s+(e-s)/2;
                if(step[mid]<=l) dis=pre[mid],s=mid+1;
                else e=mid-1;
            }
            leg[i]=dis;
        }
        for(ll i=0;i<q;i++) cout<<leg[i]<<" ";
        cout<<nl;
    }    
}
