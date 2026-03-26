#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x<0)
        {
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    int sum=0;
    int a=v.size();
    int s=min(m,a);
    for(int i=0; i<s; i++)
    {
        sum=sum+(v[i]*-1);
    }

    cout<<sum<<endl;

}

