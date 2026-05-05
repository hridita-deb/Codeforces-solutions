#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    string s;
    cin>>s;
    int nc=0,zc=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='n')
        {
            nc++;
        }
        else if(s[i]=='z')
        {
            zc++;
        }
    }

    for(int i=0; i<nc; i++)
    {
        cout<<1<<" ";
    }
    for(int i=0; i<zc; i++)
    {
        cout<<0<<" ";
    }
}
