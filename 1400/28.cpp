// Problem Link : https://codeforces.com/contest/1167/problem/B
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
const int mod=1e9+7;
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
ll getRandomNumber(ll l, ll r) {return uniform_int_distribution<ll>(l, r)(rng);}
/*-------------------------------------------------------------------------------------------------------------------------------------------*/
bool is_prime(ll n){
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
vll divisors(ll n){
    vll d;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            d.pb(i);
            if(n/i!=i) d.pb(n/i);
        }
    }
    return d;
}
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
    vi a={4,8,15,16,23,42};
    map<int,pi> mp;
    for(ll i=0;i<6;i++){
        for(ll j=i+1;j<6;j++) mp[a[i]*a[j]]={a[i],a[j]};
    }    
    map<int,bool> cnt;
    vpi keep(6);
    vi ans(6);
    ll l=1,r=2;
    for(ll i=0;i<4;i++){
        cout<<"? "<<l<<" "<<r<<nl;
        int x;
        cin>>x;
        int p=mp[x].first,q=mp[x].second;
        if(i==0) keep[0]={p,q},keep[1]={p,q},cnt[p]=1,cnt[q]=1;
        else if(i==1){
            if(keep[1].first==p || keep[1].second==p) ans[1]=p,ans[2]=q;
            else ans[1]=q,ans[2]=p;
            cnt[p]=1;
            cnt[q]=1;
            if(keep[0].first==ans[1]) ans[0]=keep[0].second;
            else ans[0]=keep[1].first; 
        }
        else{
            if(ans[i]==p) ans[i+1]=q;
            else ans[i+1]=p;
            cnt[p]=1;
            cnt[q]=1;
        }
        l++;
        r++;
    }
    for(ll i=0;i<6;i++) if(!cnt.count(a[i])) ans[5]=a[i];
    cout<<"! ";
    for(ll i=0;i<6;i++) cout<<ans[i]<<" ";
    cout<<nl;
}
