// Problem Link : https://codeforces.com/contest/1656/problem/B
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
        ll i,n,k,s,e,mid;
        cin>>n>>k;
        vll arr(n);
        read(arr,n);
        srt(arr);
        string ans="NO";
        // after number of deletion the difference between any two elements will be same because are decreasing by same values
        // just check if difference between any two elements is equal to k 
        for(i=1;i<n;i++){
            s=0;
            e=i-1;
            while(s<=e){
                mid=s+(e-s)/2;
                if(arr[i]-arr[mid]==k){
                    ans="YES";
                    break;
                }
                else if(arr[i]-arr[mid]>k) s=mid+1;
                else e=mid-1;
            }
            if(ans=="YES") break;
        }
        cout<<ans<<nl;
    }
}
