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
        map<int,int>mp;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            ans=max(ans,mp[v[i]]);
        }
        cout<<n-ans<<endl;


    }

}
