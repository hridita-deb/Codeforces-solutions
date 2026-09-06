//Solved by using prefix sum

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,x;
        cin >> n>>x;
        vector<long long>v(n);
        for(long long i=0; i<n; i++)
        {
            cin>>v[i];
        }

        sort(v.begin(),v.end());

        vector<long long>preSum(n+1,0);
        for(long long i=1; i<n+1; i++)
        {
            preSum[i]=preSum[i-1]+v[i-1];
        }

        /*for(auto it:preSum)
        {
            cout<<it<<" ";
        }
        cout<<"\n";*/

        long long totalPack=0;
        for(long long i=1; i<n+1; i++)
        {
            if(preSum[i]<=x)
            {
                long long days=((x-preSum[i])/i) +1;
                totalPack+=days;
            }
        }

        cout<<totalPack<<endl;

    }
}
