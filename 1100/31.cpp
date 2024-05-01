// Problem Link : https://codeforces.com/contest/1511/problem/C
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
int main()
{
    int i,j,n,q;
    cin>>n>>q;
    vi arr(n),qry(q),ind(51,-1);
    read(arr,n);
    read(qry,q);    
    for(i=0;i<n;i++) if(ind[arr[i]]==-1) ind[arr[i]]=i+1;
    for(i=0;i<q;i++){
        cout<<ind[qry[i]]<<" ";
        for(j=1;j<51;j++) if(ind[j]!=-1 && ind[j]<ind[qry[i]]) ind[j]++;
        ind[qry[i]]=1;
    }    
    cout<<nl;
}
