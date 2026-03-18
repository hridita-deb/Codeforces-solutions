#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,q;
    cin>>n>>q;

    int name=(n*(n+1)/2);
    map<string,int>mp;
    for(int i=0; i<name; i++)
    {
        string s;
        cin>>s;
        mp[s]++;
    }

    map<int,string>mp1;
    for(auto it:mp)
    {
        mp1[it.second]=it.first;
    }

    for(int i=0; i<q; i++)
    {
        int que;
        cin>>que;
        cout<<mp1[que]<<endl;
    }

}
