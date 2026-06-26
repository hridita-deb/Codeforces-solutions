#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0,slt=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else
            {
                slt++;
            }
        }
    //    cout<<a<<" "<<b<<" "<<slt<<endl;

        if(a==0 && b>0)
        {
            cout<<b<<endl;
        }
        else if(b==0  && a>0)
        {
            cout<<a<<endl;
        }
        else if(a>0 && b>0)
        {
            cout<<1<<endl;
        }
        else if(a==0 && b==0)
        {
            cout<<2<<endl;
        }


    }
}