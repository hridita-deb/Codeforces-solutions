#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for ( int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<int>w(n);
        for ( int i=0; i<n; i++)
        {
            cin>>w[i];
        }

        sort(v.begin(),v.end());
        sort(w.rbegin(),w.rend());

        for(int i=0; i<k; i++)
        {
            if(v[i]<w[i])
            {
                swap(v[i],w[i]);
            }
            else
            {
                break;
            }
        }

        int totalSum_v=0;
        for(int i=0; i<n; i++)
        {
            totalSum_v=totalSum_v+v[i];
        }
        cout<<totalSum_v<<endl;
    }

}


