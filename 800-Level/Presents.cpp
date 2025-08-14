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
    int j=1;
    while(j<=n)
    {
        for(int i=0; i<n; i++)
        {
            if(j==v[i])
            {
                p.push_back(i+1);
                break;
            }
        }
        j++;
    }


    for(int i=0; i<p.size(); i++)
    {
        cout<<p[i]<<" ";
    }
}
