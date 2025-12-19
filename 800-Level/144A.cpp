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

    int max=v[0],min=v[0];
    int max_index=0,min_index=0;

    for(int i=1; i<n; i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            max_index=i;
        }
        else if(v[i]<=min)
        {
            min=v[i];
            min_index=i;
        }
    }

    // cout<<max_index<<" "<<min_index<<endl;
    //  cout<<abs(max_index-1)<<" "<<abs(n-min_index)<<endl;
    int ans=max_index+abs(n-1-min_index);
    if(max_index==0 && min_index==n-1)
    {
        cout<<0<<endl;
    }
    else
    {
        if(max_index>min_index)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }


}
