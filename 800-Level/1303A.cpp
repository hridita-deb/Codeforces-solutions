#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;


        int f_one=-1, l_one=-1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                if(f_one==-1)
                {
                    f_one=i;
                }
                else
                {
                    l_one=i;
                }
            }
        }


        if(f_one==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            int count=0;
            for(int i=f_one; i<=l_one; i++)
            {
                if(s[i]=='0')
                {
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}
