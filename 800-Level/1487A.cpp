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

        int min=v[0];
        for(int i=0; i<n; i++)
        {
            if(min>v[i])
            {
                min=v[i];
            }
        }

        int count=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>min)
            {
                count++;
            }
        }

        cout<<count<<endl;
    }
}
