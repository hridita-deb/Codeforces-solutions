#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s="abcdefghijklmnopqrstuvwxyz";

        string ans="";

        for(int i=0; i<b; i++)
        {
            ans=ans+s[i];
        }
        for(int i=0; i<(n-b); i++)
        {
            ans=ans+ans[i];
        }
        cout<<ans<<endl;
    }
}
