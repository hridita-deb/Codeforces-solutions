#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;

    vector<int>v(n);
    vector<int>ans;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]<0)
        {
            ans.push_back(2);
        }
        if(v[i]>0)
        {
            ans.push_back(1);
        }
        if(v[i]==0)
        {
            ans.push_back(0);
        }
    }


    for(int i=0; i<n; i++)
    {
        cout<<ans[i]<<" ";
    }
}
