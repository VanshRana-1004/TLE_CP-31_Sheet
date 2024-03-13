// Problem Link : https://codeforces.com/problemset/problem/1869/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int i=0,n,x,ans=0,c=0;
        cin>>n;
        vector<int> a;
        while(i++<n){
            cin>>x;
            if(x==0) c++;
            a.push_back(x);
        }
        if(c==n) cout<<0<<endl;
        else if(n%2==0){
            for(i=0;i<n;i++) ans^=a[i];
            if(ans==0){
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else{
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
        }
        else{
            for(i=0;i<n-1;i++) ans^=a[i];
            if(ans==0 && a[n-1]==0){
                cout<<1<<endl;
                cout<<1<<" "<<n-1<<endl;
            }
            else if(ans==0 && a[n-1]!=0){
                cout<<3<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(ans!=0 && a[n-1]==0){
                cout<<2<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<n-1<<endl;
            }
            else{
                cout<<4<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
        }
    }
}
