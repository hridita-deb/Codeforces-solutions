#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;

        char winner='.';

        if ((a[0]==a[1] )&& (a[1]==a[2]) && a[0]!='.')
        {
            winner=a[0];
        }
        if((a[0]==b[0]) && (b[0]==c[0]) && a[0]!='.')
        {
            winner=a[0];
        }
        if((a[0]==b[1]) && (b[1]==c[2] ) && a[0]!='.')
        {
            winner=a[0];
        }
        if(  (b[0]==b[1]) && (b[1]==b[2])  && b[0]!='.')
        {
            winner=b[0];
        }
        if(   (c[0]==c[1]) && (c[1]==c[2]) && c[0]!='.' )
        {
            winner=c[0];
        }
        if(  (a[1]==b[1]) && (b[1]==c[1]) && a[1]!='.' )
        {
            winner=a[1];
        }
        if(   (a[2]==b[2]) && (b[2]==c[2]) && a[2]!='.')
        {
            winner=a[2];
        }
        if((a[2]==b[1]) && (b[1]==c[0]) && a[2]!='.')
        {
            winner=a[2];
        }

        if(winner=='.')
        {
            cout<<"DRAW"<<endl;
        }
        else
        {
            cout<<winner<<endl;
        }
    }
}
