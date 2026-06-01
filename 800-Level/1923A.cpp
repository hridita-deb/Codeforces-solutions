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


        int first=0,last=0;

        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                first=i;
                break;
            }
        }


        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==1)
            {
                last=i;
                break;
            }
        }

        int z=0;
        for(int i=first; i<=last; i++)
        {
            if(v[i]==0)
            {
                z++;
            }
        }
        cout<<z<<endl;




    }
}
