// Priblem Link : https://codeforces.com/contest/1845/problem/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x,i;
        cin>>n>>k>>x;
        if(k==1) cout<<"NO"<<endl;
        else{
            if(k>=2 && x==1){
                if(n%2==1){
                    if(k>2){
                        cout<<"YES"<<endl;
                        cout<<n/2<<endl;
                        int d=n/2-1;
                        cout<<3<<" ";
                        while(d--) cout<<2<<" ";
                        cout<<endl;
                    }
                    else cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    int d=n/2;
                    while(d--) cout<<2<<" ";
                    cout<<endl;
                }
            }
            else if(k>=2 && x==2){
                cout<<"YES"<<endl;
                cout<<n<<endl;
                i=0;
                while(i<n) cout<<1<<" ",i++;
                cout<<endl;
            }
            else if(k>=2 && x>2){
                cout<<"YES"<<endl;
                int s=n/2;
                if(n%2==1) s++;
                cout<<s<<endl;
                if(n%2==1) cout<<1<<" ",s--;
                while(s--) cout<<2<<" ";
                cout<<endl;
                                
            }
        }
    }
} 
