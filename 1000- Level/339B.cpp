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

    long long time=v[0]-1;   //কারন ১ম বাসাতে সে ইতিমধ্যেই উপস্থিত

    for(int i=0; i<m-1; i++)
    {
        if(v[i]>v[i+1])
        {
            time=time+n-(v[i]-v[i+1]);
        }
        else
        {
            time=time+(v[i+1]-v[i]);
        }
    }
    cout<<time<<endl;

}
