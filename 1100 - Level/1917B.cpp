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
        string s;
        cin>>s;


        map<char,int>mp;
        vector<int>v;
        int count=0;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
            if(mp[s[i]]==1)
            {
                count++;
            }
            v.push_back(count);
        }


        int ans=0;
        for(int i=0; i<v.size(); i++)
        {
            ans=ans+v[i];
        }


        cout<<ans<<endl;
    }
}

