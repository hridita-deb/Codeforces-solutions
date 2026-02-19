#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int got=0;
        int ans=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==')')
            {
                got++;
            }
            else
            {
                got--;
            }
            if(got==0)
            {
                ans++;
            }
        }


        if(ans>1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
