#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {


        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<long long>p(n);
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }


        long long price2=0;
        for(int i=0; i<n; i++)
        {
            price2=price2+(v[i]*p[i]);
        }


        long long m=*min_element(v.begin(),v.end());
        for(int i=0; i<n; i++)
        {
            v[i]=v[i]-m;
        }
        long long price=m*k;
        for(int i=0; i<n; i++)
        {
            price=price+(v[i]*p[i]);
        }

        cout<<max(price,price2)<<endl;
    }
}
