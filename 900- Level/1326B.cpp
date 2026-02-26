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

    vector<int>p;
    int x=0;
    int mx=0;
    for(int i=0; i<n; i++)
    {
        x=mx+v[i];
        p.push_back(x);
        mx=max(mx,x);

    }

    for(auto it:p)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}
