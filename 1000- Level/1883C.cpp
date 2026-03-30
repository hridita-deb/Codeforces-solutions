#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        vector<int>p;
        int found=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(int i=0; i<n; i++)
        {
            if(v[i]%k==0)
            {
                found=1;
                break;
            }
        }
        int ans=0;
        if(found==1)
        {
            ans=0;
        }

        else
        {
            if(k==4)
            {
                int even=0;
                for(int i=0; i<n; i++)
                {
                    if(v[i]%2==0)
                    {
                        even++;
                    }
                }
                if(even>=2)
                {
                    ans=0;
                }
                else if(even==1)
                {
                    ans=1;
                }
                else
                {
                    for(int i=0; i<n; i++)
                    {
                        int need=k-(v[i]%k);
                        p.push_back(need);
                    }
                    ans=min(2,*min_element(p.begin(),p.end()));
                }
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    int need=k-(v[i]%k);
                    p.push_back(need);
                }
                ans=*min_element(p.begin(),p.end());
            }
        }
        cout<<ans<<endl;

    }
}
