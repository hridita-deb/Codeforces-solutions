#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,rnd;
        cin >> n>>rnd;
        int sz=2*n;
        string s;
        cin >> s;


        int flag=0;
        if(s[0]=='0' && s[sz-1]=='1')
        {
            flag=1;
        }

        string temp=s;
        for(int i=1; i<sz; i++)
        {
            if(s[i]=='0' && s[i-1]=='1')
            {
                temp[i]=s[i-1];
                temp[i-1]=s[i];
                i++;
            }
        }


        if(flag==1)
        {
            temp[0]= s[sz-1];
            temp[ sz-1]=s[0];
        }


        int b=0,r=0;
        for(int i=0; i<sz; i++)
        {

            if(i%2!=0)
            {
                if(temp[i]=='1')
                {
                    r++;
                }
            }
            else if(i%2==0)
            {
                if(temp[i]=='1')
                {
                    b++;
                }
            }

        }



        cout<<r<<" "<<b<<"\n";
    }
}
