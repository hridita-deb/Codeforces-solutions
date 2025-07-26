#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++)
        {
            s[i]=tolower(s[i]);
        }

        string p="";
        p=p+s[0];

        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                p=p+s[i];
            }
        }

        if(p=="meow")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

























