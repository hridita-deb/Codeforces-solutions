#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n,max_wtr;
        cin>>n>>max_wtr;
        vector<long long>v(n);
        for(long long i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());


        long long low=1,high=1e10;
        long long crnt_wtr,mid;
        long long ans=0;
        while(low<=high)
        {
            crnt_wtr=0;
            mid=low+(high-low)/2;
            for(int i=0; i<n; i++)
            {
                if(v[i]<mid)
                {
                    crnt_wtr=crnt_wtr+(mid-v[i]);
                }
            }

            if(crnt_wtr>max_wtr)
            {
                high=mid-1;
            }
            else
            {
                ans=mid;
                low=mid+1;
            }
        }
        cout<<ans<<endl;



    }
}
