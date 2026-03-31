#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p;
        cin>>n>>p;
        vector<int>a(n),b(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }

        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            if(b[i]<=p)
            {
                v.push_back({a[i],b[i]});
            }
        }
        sort(v.begin(),v.end(),comp);

        long long ans=p;
        int remain=n-1;
        for(int i=0; i<v.size(); i++)
        {

            if(remain<=0)
            {
                break;
            }
            else
            {
                int used=min(remain,v[i].first);
                ans=ans+(1LL*v[i].second*used);
                remain=remain-used;
            }
        }

        ans=ans+(1LL*remain*p);
        cout<<ans<<endl;
    }
}
