#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;

        //valid string kintu 4 ta...oi 4 ta diye ami match korabo & oi 4 ta string ami manually build kore flbo
        //00110011
        //11001100
        //100110011
        //011001100

        string a,b,c,d;
        a="00";
        b="11";
        c="1";
        d="0";

        while(a.size()<n)
        {
            if(a.size()+4<=n)
            {
                a+="1100";
            }
            else if(a.size()+3<=n)
            {
                a+="110";
            }
            else if(a.size()+2<=n)
            {
                a+="11";
            }
            else if(a.size()+1<=n)
            {
                a+="1";
            }
        }

        while(b.size()<n)
        {
            if(b.size()+4<=n)
            {
                b+="0011";
            }
            else if(b.size()+3<=n)
            {
                b+="001";
            }
            else if(b.size()+2<=n)
            {
                b+="00";
            }
            else if(b.size()+1<=n)
            {
                b+="0";
            }
        }

        while(c.size()<n)
        {
            if(c.size()+4<=n)
            {
                c+="0011";
            }
            else if(c.size()+3<=n)
            {
                c+="001";
            }
            else if(c.size()+2<=n)
            {
                c+="00";
            }
            else   if(c.size()+1<=n)
            {
                c+="0";
            }
        }

        while(d.size()<n)
        {
            if(d.size()+4<=n)
            {
                d+="1100";
            }
            else if(d.size()+3<=n)
            {
                d+="110";
            }
            else if(d.size()+2<=n)
            {
                d+="11";
            }
            else   if(d.size()+1<=n)
            {
                d+="1";
            }
        }

        // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

        long long ans=4;
        for(  long long i=0; i<n; i++)
        {
            if(s[i]!=a[i] && s[i]!='?')
            {
                ans--;
                break;
            }
        }

        for(  long long i=0; i<n; i++)
        {
            if(s[i]!=b[i] && s[i]!='?')
            {
                ans--;
                break;
            }
        }

        for(  long long i=0; i<n; i++)
        {
            if(s[i]!=c[i] && s[i]!='?')
            {
                ans--;
                break;
            }
        }

        for(  long long i=0; i<n; i++)
        {
            if(s[i]!=d[i] && s[i]!='?')
            {
                ans--;
                break;
            }
        }

        cout<<ans<<"\n";
    }
}
