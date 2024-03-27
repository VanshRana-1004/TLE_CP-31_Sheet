// Problem Link : https://codeforces.com/problemset/problem/1715/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        unsigned long long int i,n,k,b,s,xtra,add;
        cin>>n>>k>>b>>s;
        if(n==1){
            if(s/k!=b) cout<<-1<<endl;
            else cout<<s<<endl;
        }
        else if(s/k<b) cout<<-1<<endl;
        else{
            xtra=s-k*b;
            if(xtra<k){
                for(i=0;i<n-2;i++) cout<<0<<" ";
                cout<<xtra<<" "<<k*b<<endl;
            }
            else{
                xtra-=(k-1);
                if(xtra>(n-1)*(k-1)) cout<<-1<<endl;
                else{
                    for(i=0;i<n-1 && xtra>0;i++){
                        if(k-1<xtra) cout<<k-1<<" ",xtra-=(k-1);
                        else cout<<xtra<<" ",xtra=0;
                    }
                    while(i<n-1) cout<<0<<" ",i++;
                    cout<<k*b+(k-1)<<endl;
                }
            }
        }
    }
}
