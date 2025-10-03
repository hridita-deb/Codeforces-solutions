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

        int zero=0,one=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int ans=min(zero,one);

        if( one==zero)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}
