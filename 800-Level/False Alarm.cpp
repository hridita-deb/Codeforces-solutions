#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n,x;
        cin>>n>>x;

        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        int max_index=0;
        int min_index=n-1;

        for(int i=0; i<n; i++)
        {
            if(v[i]==1)
            {
                if(max_index<i)
                {
                    max_index=i;
                }
                if(min_index>i)
                {
                    min_index=i;
                }
            }
        }

        int need_sec=max_index-min_index+1;

        if(x>=need_sec)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
