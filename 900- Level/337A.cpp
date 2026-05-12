#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n>>m;

    vector<int>v(m);
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int ans=INT_MAX;
    for(int i=0; i<=m-n; i++)
    {
        int mini=v[i];
        int max=v[n+i-1];
        ans=min(ans,max-mini);
    }


    cout<<ans<<endl;
}
