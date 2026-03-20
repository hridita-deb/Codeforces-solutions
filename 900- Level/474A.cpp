#include<bits/stdc++.h>
using namespace std;
int main()
{

    char c;
    cin>>c;
    string s;
    cin>>s;

    string p="qwertyuiopasdfghjkl;zxcvbnm,./";
    if(c=='R')
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<p.size(); j++)
            {
                if(s[i]==p[j])
                {
                    cout<<p[j-1];
                    break;
                }
            }
        }
    }

    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<p.size(); j++)
            {
                if(s[i]==p[j])
                {
                    cout<<p[j+1];
                    break;
                }
            }
        }
    }

}
