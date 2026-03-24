#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t;
    cin>>t;
    while(t--)
    {

        long long n,h;
        cin>>n>>h;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        long long left=1,right=h,ans=0;
        while(left<=right)
        {
            long long k=(left+right)/2;       //mid ke K dhore nibo
            long long damage=0;
            for(int i=0; i<n-1; i++)
            {
                damage=damage+min(k,v[i+1]-v[i]);
            }
            damage=damage+k;

            if(damage>=h)   //kintu amar korte hobe min damage, tai damage health theke boro hole choto value nibo orthat pechone ashbo
            {
                ans=k;
                right=k-1;
            }
            else
            {
                left=k+1;
            }
        }

        cout<<ans<<endl;
    }
}
