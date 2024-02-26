// Problem Link : https://codeforces.com/problemset/problem/1873/C
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        for(int i=1;i<=10;i++){
            char ch;
            for(int j=1;j<=10;j++){
                cin>>ch;
                if(ch=='X'){
                    int r=i,c=j;
                    if(r>5) r=10-i+1;
                    if(c>5) c=10-j+1;
                    if(r==c) ans+=r;
                    else ans+=min(r,c);
                }
            }
        }
        cout<<ans<<endl;
    }
}
