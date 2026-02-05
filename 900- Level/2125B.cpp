#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;

        long long c=a,d=b;
        long long gcd=1;

        while(a>0 && b>0)
        {
            if(a>b)
            {
                a=a%b;
            }
            else
            {
                b=b%a;
            }
        }

        if(a==0)
        {
            gcd=b;
        }
        else
        {
            gcd=a;
        }
        long long x=c/gcd;
        long long y=d/gcd;

        if(x<=k && y<=k)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }

    }
}
