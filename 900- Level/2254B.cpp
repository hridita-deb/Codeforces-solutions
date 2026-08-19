#include <bits/stdc++.h>
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


        int ans=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                ans++;
            }
        }

        int dlt=0;
        for(int i=1; i<n-1; i++)
        {
            if(s[i]!=s[i-1]  && s[i]!=s[i+1])
            {
                if(s[i-1]==s[i+1])
                {
                    dlt=2;
                    break;   //2 pawa mne best ansr peyechi,so r check korar drkr nei
                }
                else
                {
                    dlt=1;     //break dinai karon best answer hcche 2

                }
            }
        }

        cout<<ans-dlt<<endl;


    }
}
