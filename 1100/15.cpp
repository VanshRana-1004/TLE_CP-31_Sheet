// Problem Link : https://codeforces.com/problemset/problem/1820/B
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
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll i,c=0,n=ssz(s);
        for(i=0;i<n;i++) if(s[i]=='1') c++;
        if(c==n) cout<<n*n<<nl;
        else if(c==0) cout<<0<<nl;
        else{
            i=0;
            ll ind,slen=0,elen=0,len=0;
            while(i<n && s[i]=='1') i++;
            slen=i;
            len=i;
            while(i<n){
                ind=i;
                while(i<n && s[i]=='1') i++;
                len=max(len,i-ind);
                i++;
            }
            i=n-1;
            while(i>=0 && s[i]=='1') i--;
            elen=n-i-1;
            len=max(len,elen);
            len=max(len,slen+elen);
            ll lft=0,ans=0;
            if(len>=slen+elen) lft=len;
            else lft=n-slen;
            for(i=0;i<lft;i++) ans=max(ans,len*(i+1)),len--;
            cout<<ans<<nl;
        }
    }    
}
