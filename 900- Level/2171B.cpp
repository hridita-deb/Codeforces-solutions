#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(v[0]==-1 || v[n-1]==-1)
        {
            int a=max(v[0],v[n-1]);

            if(a!=-1)
            {
                v[0]=a;
                v[n-1]=a;
            }
            else
            {
                v[0]=0;
                v[n-1]=0;
            }
        }

        cout<<abs(v[n-1]-v[0])<<endl;
        cout<<v[0]<<" ";
        for(int i=1; i<n-1; i++)
        {
            if(v[i]==-1)
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<v[i]<<" ";
            }
        }
        cout<<v[n-1]<<endl;
    }
}
