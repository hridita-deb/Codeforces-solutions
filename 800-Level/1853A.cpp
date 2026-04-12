#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }


        int count=1;
        for(int i=1; i<n; i++)
        {
            if(v[i]>=v[i-1])
            {
                count++;
            }
        }


        if(count!=n)
        {
            cout<<0<<endl;
        }

        else
        {

            long long diff=1e9;
            for(int i=1; i<n; i++)
            {
                long long a=v[i]-v[i-1];
                if(a<diff)
                {
                    diff=a;
                }
            }
            cout<<(diff/2)+1<<endl;   //Optimized way
            /*    int op=0;
                while(diff>=0)
                {
                    diff=diff-2;
                    op++;
                }
                cout<<op<<endl;*/       //Getting tle for this
        }


    }
}

