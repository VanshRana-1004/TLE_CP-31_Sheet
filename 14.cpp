// Problem Link : https://codeforces.com/contest/1821/problem/B
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
        int n,i=0,ind,len=0,s=0,e=0,ans_len=0,ans_s=0,ans_e=0,f=0;
        cin>>n;
        vi a(n),b(n);
        read(a,n);
        read(b,n);
        i=0;
        while(i<n-1){
            ind=i;
            f=0;
            while(i<n-1 && b[i]<=b[i+1]){   
                if(a[i]!=b[i] || a[i+1]!=b[i+1]) f=1;
                i++;
            } 
            if(f==1){
                cout<<ind+1<<" "<<i+1<<nl;
            }
            i++;
        }
    }    
}
