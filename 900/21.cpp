// Problem Link : https://codeforces.com/problemset/problem/1593/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long i,n1,n2,f=0,z=0,flag=0;
        cin>>n1;
        if(n1%25==0 || n1<10) cout<<0<<endl;
        else{
            string s=to_string(n1);
            // for 0 {00,50}
            i=s.length()-1;
            while(i>0 && s[i]!='0') i--,z++;
            i--;
            while(i>0){
                if(s[i]=='5' || s[i]=='0') break;
                i--;
                z++;
            }
            // for 5 {25,75}
            i=s.length()-1;
            while(i>0 && s[i]!='5') i--,f++;
            i--;
            while(i>0){
                if(s[i]=='2' || s[i]=='7') break;
                i--;
                f++;
            }  
            cout<<min(f,z)<<endl;
        }
    }
}
