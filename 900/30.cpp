// Problem Link : https://codeforces.com/contest/1373/problem/B
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0,sum=0,cnt=0;
        while(i<s.length()){
            int pre=sum;
            if(s[i]=='0') sum--;
            else sum++;
            if(pre<0 && pre<sum) cnt++;  // if previous sum is less than 0 and new sum is greater than previous sum
            else if(pre>0 && pre>sum) cnt++;  // if previous sum is greater than 0 and new sum is less than previous sum
            i++;
        }
        if(cnt%2==1) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}
