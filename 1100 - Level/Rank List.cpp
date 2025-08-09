#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1,pair<int,int>p2)
{

    if(p1.first>p2.first)
    {
        return true;
    }
    if(p1.first<p2.first)
    {
        return false;
    }

    if(p1.second<p2.second)
    {
        return true;
    }
    {
        return false;
    }

}


int main()
{

    int n,k;
    cin>>n>>k;


    vector<pair<int,int>>v;
    for(int i=0; i<n; i++)
    {
        int p,t;
        cin>>p>>t;
        v.push_back({p,t});
    }
    sort(v.begin(),v.end(),comp);


    pair<int,int>target=v[k-1];
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==target)
        {
            count++;
        }
    }


    cout<<count<<endl;
}
