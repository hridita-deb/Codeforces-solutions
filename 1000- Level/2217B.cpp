#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n+2);

        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }

        int p;
        cin>>p;


        int leftCount=0,rightCount=0;
        v[0]=v[n+1]=v[p];

        for(int i=0; i<p; i++)
        {
            if(v[i]!=v[i+1])
            {
                leftCount++;
            }
        }


        for(int i=p; i<n+1; i++)
        {
            if(v[i]!=v[i+1])
            {
                rightCount++;
            }
        }

        cout<<max(leftCount,rightCount)<<endl;




    }
}