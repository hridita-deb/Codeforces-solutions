#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>v(n);
        for ( int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int max=v[0];
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>=max)
            {
                max=v[i];
            }
        }

        cout<<max+v[n-1]<<endl;


    }

}
