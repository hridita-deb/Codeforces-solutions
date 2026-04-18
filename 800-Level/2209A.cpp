#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long n,p,f;
        cin>>n>>p>>f;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        for(int i=0; i<n; i++)
        {
            if(v[i]>p)
            {
                break;
            }
            else
            {
                long long need=min(f,p-v[i]);
                p=p+v[i]+need;
                f=f-need;
            }
        }

        cout<<p<<endl;


    }
}
