#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    long long missing=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]-v[i-1]>1)
        {
            missing=missing+(v[i]-v[i-1]-1);
        }
    }
    cout<<missing<<endl;
}