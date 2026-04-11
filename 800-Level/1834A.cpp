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
        vector<int>v(n);
        int pstv=0,ngtv=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

            if(v[i]==1)
            {
                pstv++;
            }
            else
            {
                ngtv++;
            }
        }

        int ans=0;
        while(pstv<ngtv || ngtv%2==1)
        {
            ngtv--;
            pstv++;
            ans++;
        }
        cout<<ans<<endl;
    }
}

