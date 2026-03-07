#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        long long n;
        cin>>n;
        vector<long long>p;
        if(n%2==0)
        {
            p.push_back(2);
            while(n%2==0)
            {
                n=n/2;
            }
        }

        for(int i=3; i*i<=n; i++)
        {
            if(n%i==0)
            {
                p.push_back(i);
                while(n%i==0)
                {
                    n=n/i;
                }
            }

        }
        if(n>2)
        {
            p.push_back(n);
        }


        long long ans=1;
        for(auto it:p)
        {
            ans=ans*it;
        }

        cout<<ans<<endl;

    }
}

