#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {

        long long n,t,q;
        cin>>n>>t>>q;

        vector<long long>tcr(t);
        for(long long i=0; i<t; i++)
        {
            cin>>tcr[i];
        }
        sort(tcr.begin(),tcr.end());


        while(q--)
        {
            int dvdPos;
            cin>>dvdPos;


            int beg=0;
            int end=t-1;
            int indx=t;
            int mid;
            while(beg<=end)
            {
                mid=beg+(end-beg)/2;
                if(tcr[mid]>=dvdPos)
                {
                    indx=mid;
                    end=mid-1;
                }
                else
                {
                    beg=mid+1;
                }
            }


            if(indx==0)
            {
                cout<<tcr[0]-1<<endl;
            }
            else if(indx==t)
            {
                cout<<n-tcr[t-1]<<endl;
            }
            else
            {
                int ans=(tcr[indx]-tcr[indx-1])/2;
                cout<<ans<<"\n";
            }


        }
    }
}
