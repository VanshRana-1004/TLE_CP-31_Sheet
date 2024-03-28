// Problem Link : https://codeforces.com/problemset/problem/1913/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int i,o=0,z=0;
        cin>>s;
        for(i=0;i<s.length();i++){
            if(s[i]=='0') z++;
            else o++;
        }
        for(i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(o>0) o--;
                else break; 
            }
            else{
                if(z>0) z--;
                else break;
            }
        }
        cout<<s.length()-i<<endl;
    }
}
