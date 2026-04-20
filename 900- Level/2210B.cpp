/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }


        int s_count=0;
        for(int i=1; i<=n; i++)
        {
            if(v[i]<=i)
            {
                s_count++;
            }
        }

        int ans=s_count;

        for(int i=1; i<=n; i++)
        {
            if(v[i]>i)
            {
                int safeBstop=0;
                for(int j=1; j<v[i]; j++)
                {
                    if(v[j]<=j)
                    {
                        safeBstop++;
                    }
                    ans=max(ans,safeBstop+1);
                }
            }
        }

        cout<<ans<<endl;





    }
}*/


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
        vector<int>v(n+1);
        vector<int>cnt(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }



        for(int i=1; i<=n; i++)
        {
            cnt[i]=cnt[i-1];
            if(v[i]<=i)
            {
                cnt[i]++;
            }
        }

        int ans=cnt[n];

        for(int i=1; i<=n; i++)
        {
            if(v[i]>i)
            {
                ans=max(ans,cnt[v[i]-1]+1);
            }
        }
        cout<<ans<<endl;

    }
}
