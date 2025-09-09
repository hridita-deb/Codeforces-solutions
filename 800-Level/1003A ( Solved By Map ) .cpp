#include<bits/stdc++.h>
using namespace std;
int main()
{


    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }


    map<int,int>mp; //Key-> Unique number , Value->Count
    for(int i=0; i<n; i++)
    {
        int key=v[i];
        mp[key]=mp[key]+1;
    }


    int maxCount=0;
    for(auto it : mp)
    {
        if(it.second>maxCount)
        {
            maxCount=it.second;
        }
    }


    cout<<maxCount<<endl;
}
