#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    string p="";

    int pos=0;
    for(int i=pos; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            p=p+s[i];
            pos=i;
            break;
        }
    }


    for(int i=pos+1; i<s.size(); i++)
    {
        if(s[i]=='e')
        {
            p=p+s[i];
            pos=i;
            break;
        }
    }


    for(int i=pos+1; i<s.size(); i++)
    {
        if(s[i]=='l')
        {
            p=p+s[i];
            pos=i;
            break;
        }
    }


    for(int i=pos+1; i<s.size(); i++)
    {
        if(s[i]=='l')
        {
            p=p+s[i];
            pos=i;
            break;
        }
    }


    for(int i=pos+1; i<s.size(); i++)
    {
        if(s[i]=='o')
        {
            p=p+s[i];
            pos=i;
            break;
        }
    }


    string h="hello";
    if(p==h)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
