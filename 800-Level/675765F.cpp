#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>p;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];

    }
    p.push_back(v[0]);
    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1])
        {
            p.push_back(v[i]);
        }
    }
    cout<<p.size()<<endl;
    for(auto it:p)
    {
        cout<<it<<" ";
    }





}
